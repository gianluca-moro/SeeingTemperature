'''
    Camera Calibration
        Calibrates the FLIR camera and the front-facing HoloLens camera, 
        so we know which HoloLens pixel corresponds to which thermal image pixel

        Returns a Homography matrix H which can be used to warp a HoloLens pixel coordinates
        using the description in the warp_pixel method
'''

import numpy as np
import cv2

def match_SIFT_features(image,template):
    print("Match SIFT features")

    # Initiate SIFT detector
    sift = cv2.SIFT_create()

    # find the keypoints and descriptors with SIFT
    kp1, des1 = sift.detectAndCompute(image,None)
    kp2, des2 = sift.detectAndCompute(template,None)

    print("Find matches")
    # Brute Force Matcher with default params
    bf = cv2.BFMatcher()
    matches = bf.knnMatch(des1,des2, k=2)

    # Apply ratio test
    good = []
    for m,n in matches:
        if m.distance < 0.7 * n.distance:
            good.append([m])

    print("Number of good matches:", len(good))
    print("Draw matches")
    mapped_features = cv2.drawMatchesKnn(image, kp1, template, kp2, good, None, flags=2)
    show_img(mapped_features, "Mapped Features")
    cv2.imwrite("mapped_features.png", mapped_features)

    obj = np.empty((len(good),2), dtype=np.float32)
    scene = np.empty((len(good),2), dtype=np.float32)
    for i in range(len(good)):
        #-- Get the keypoints from the good matches
        obj[i,0] = kp1[good[i][0].queryIdx].pt[0]
        obj[i,1] = kp1[good[i][0].queryIdx].pt[1]
        scene[i,0] = kp2[good[i][0].trainIdx].pt[0]
        scene[i,1] = kp2[good[i][0].trainIdx].pt[1]

    print("Find Homography matrix")
    # could also use LMEDS instead of RANSAC but has pretty much the same result
    H, mask = cv2.findHomography(obj, scene, cv2.RANSAC)
    num_inliers = 0
    for m in mask:
        if m[0] == 1:
            num_inliers += 1
    print(f"Number of inliers: {num_inliers}\nPercentage of inliers: {round(num_inliers / len(good), 3)}")
    print("Homography matrix:\n", H)

    '''
        Homography Matrix with current calibration images (hand on black background, 06.11.21):
        [[ 3.7907548397926333e-01  2.2539819663811609e-02 -1.6377139502293127e+02]
         [ 1.8722883539177355e-02  3.8150802183948879e-01  1.3546483061885007e+02]
         [ 8.3434084498385530e-05  4.7968871606718406e-05  1.0000000000000000e+00]]
    '''
    return H


def warp_image(img, H, size):
    print("Warp image")
    warped_image = cv2.warpPerspective(img, H, size)
    show_img(warped_image, "Warped Image")
    cv2.imwrite("warped_image.png", warped_image)
    return warped_image


def side_by_side(original_img, warped_img):
    '''Show original image next to warped image'''
    side_by_side = np.hstack((original_img, warped_img))
    show_img(side_by_side, "Side by side")
    cv2.imwrite("side_by_side.png", side_by_side)


def show_img(img, name="Image"):
    cv2.imshow(name, img)
    # keep window open until closed (ESC or X button)
    while True:
        key = cv2.waitKey(250)
        if key == 27 or cv2.getWindowProperty(name, cv2.WND_PROP_VISIBLE) < 1:
            cv2.destroyAllWindows()
            break


# returns pixel coordinates in original-size (160x120) and unrotated thermal image
# IMPORTANT: Provided pixels coordinates (x,y) correspond to original size hololens image (2196x3904)
def warp_pixel(x, y, H, downscale_factor=1.0, upscale_factor=1.0):
    '''
    In theory:
        to warp hololens pixel (x,y), 
        we first need to calculate the coordinates in the downscaled hololens image: x = x / downscale_factor, y = y / downscale_factor
        we then need to calculate H @ [[x], [y], [1]] = [[wx'], [wy'], [w]] 
        (where @ is matrix multiplication)
        then divide by w to get [[x'], [y'], [1]] where (x',y') are the coordinates in the thermal image

        also because the thermal_image was rescaled to (492,369), the coordinates (x',y') are also upscaled
        to get the coordinates in the original (160x120) thermal_image, we need to divide (x',y') by (492/160) = 3.075

        also important: the thermal image pixel coordinates correspond to the rotated thermal image
        (because feature mapping works a lot better when both images are oriented the same way)
        to get the pixel coordinate in the original (unrotated thermal image), use x'' = 160 - y' and y'' = x'

    Note: with our current calibration images, the warping is off a bit
        (the warped coordinates are a bit too far to the right and too high,
        but it's not much, maybe 1cm in real life, so it should still be fine)
        Maybe with a different set of calibration images it might work better
    '''
    print(f"\n\nHololens image pixel coordinates: ({x}, {y})")
    x = int(x / downscale_factor)
    y = int(y / downscale_factor)
    hololens_img_pixel = np.array([[x], [y], [1]])
    print("Hololens image downscale factor:", downscale_factor)
    print(f"Downscaled Hololens image pixel coordinates: ({x}, {y})")
    warped = H @ hololens_img_pixel     # homogeneous coordinates (wx', wy', w)
    print("Warped homogeneous coordinates:\n", warped)
    normalized = warped / warped[2][0]  # normalized coordinates (x', y', 1)
    print(f"Warped normalized coordinates (= coordinates in upscaled thermal image): ({normalized[0][0]}, {normalized[1][0]})")
    print("Thermal image upscale factor:", upscale_factor)
    thermal_img_pixel = normalized / upscale_factor
    print(f"Thermal image pixel coordinates (in rotated image): ({int(thermal_img_pixel[0][0])}, {int(thermal_img_pixel[1][0])})")
    print(f"Thermal image pixel coordinates (in original image): ({int(160 - thermal_img_pixel[1][0])}, {int(thermal_img_pixel[0][0])})")
    return int(160 - thermal_img_pixel[1][0]), int(thermal_img_pixel[0][0])


def main():
    print("Reading images")
    np.set_printoptions(precision=16)
    hololens_img = cv2.imread("Capture.jpg")
    hololens_img_orig_size = hololens_img.shape
    # rotate thermal image so both images are oriented the same way for better result
    thermal_img = cv2.rotate(cv2.imread("thermal_image.png"), cv2.ROTATE_90_COUNTERCLOCKWISE)

    # resizes images for better results
    #   upscale thermal image and downscale hololens image
    # TODO: maybe try different rescale factors?
    hololens_img = cv2.resize(hololens_img, (1920, 1080), interpolation = cv2.INTER_AREA)
    unblurred_hololens_img = hololens_img
    thermal_img = cv2.resize(thermal_img, (369, 492), interpolation = cv2.INTER_AREA)
    
    # Apply blurring
    #   Note: without blurring, the result is a bit better
    #hololens_img = cv2.GaussianBlur(hololens_img, (99,99), cv2.BORDER_DEFAULT)
    #thermal_img = cv2.GaussianBlur(thermal_img, (9,9), cv2.BORDER_DEFAULT)

    # Create grayscale images
    hololens_img = cv2.cvtColor(hololens_img, cv2.COLOR_BGR2GRAY)
    thermal_img = cv2.cvtColor(thermal_img, cv2.COLOR_BGR2GRAY)
    unblurred_hololens_img = cv2.cvtColor(unblurred_hololens_img, cv2.COLOR_BGR2GRAY)


    H = match_SIFT_features(hololens_img, thermal_img)
    warped_img = warp_image(hololens_img, H, (thermal_img.shape[1], thermal_img.shape[0]))
    side_by_side(thermal_img, warped_img)


    hololens_img_downscale_factor = hololens_img_orig_size[0] / hololens_img.shape[0]
    thermal_img_upscale_factor = thermal_img.shape[1] / 120
    x,y = warp_pixel(1919, 383, H, hololens_img_downscale_factor, thermal_img_upscale_factor)   # Fingernail of small finger
    x,y = warp_pixel(2284, 1542, H, hololens_img_downscale_factor, thermal_img_upscale_factor)  # Fingernail of thumb
    x,y = warp_pixel(2540, 626, H, hololens_img_downscale_factor, thermal_img_upscale_factor)   # Fingernail of middle finger
    x,y = warp_pixel(1590, 1144, H, hololens_img_downscale_factor, thermal_img_upscale_factor)  # Middle of hand


if __name__ == "__main__":
    main()