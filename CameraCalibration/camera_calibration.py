'''
    Camera Calibration
        Calibrates the FLIR camera and the front-facing HoloLens camera, 
        so we know which HoloLens pixel corresponds to which thermal image pixel

        Returns a Homography matrix H which can be used to warp a HoloLens pixel coordinates
        using the description in the warp_pixel method
'''

import numpy as np
import cv2
from matplotlib import pyplot as plt

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

    #print("Draw matches")
    #img3 = cv2.drawMatchesKnn(image, kp1, template, kp2, good, None, flags=2)
    #return img3

    obj = np.empty((len(good),2), dtype=np.float32)
    scene = np.empty((len(good),2), dtype=np.float32)
    for i in range(len(good)):
        #-- Get the keypoints from the good matches
        obj[i,0] = kp1[good[i][0].queryIdx].pt[0]
        obj[i,1] = kp1[good[i][0].queryIdx].pt[1]
        scene[i,0] = kp2[good[i][0].trainIdx].pt[0]
        scene[i,1] = kp2[good[i][0].trainIdx].pt[1]

    print("Find Homography matrix")
    H, _ =  cv2.findHomography(obj, scene, cv2.RANSAC)
    result = cv2.warpPerspective(image, H, (template.shape[1], template.shape[0]))

    '''
        Homography Matrix with current calibration images (hand on black background, 06.11.21):
        [[ 4.13230472e-01 -8.58864495e-02 -1.19166692e+02]
         [ 1.20177305e-01  3.07665391e-01  8.21631527e+01]
         [ 3.07460187e-04 -2.71324057e-04  1.00000000e+00]]
    '''
    return result, H


# returns pixel coordinates in original-size (160x120) and unrotated thermal image
def warp_pixel(x, y, H, upscale_factor=1.0):
    '''
    In theory:
        to warp hololens pixel (x,y), we need to calculate H @ [[x], [y], [1]] = [[wx'], [wy'], [w]] 
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
    print("Homography matrix:\n", H)
    hololens_img_pixel = np.array([[x], [y], [1]])
    print(f"Hololens image pixel coordinates: ({hololens_img_pixel[0][0]}, {hololens_img_pixel[1][0]})")
    warped = H @ hololens_img_pixel     # homogeneous coordinates (wx', wy', w)
    print("Warped homogeneous coordinates:\n", warped)
    normalized = warped / warped[2][0]  # normalized coordinates (x', y', 1)
    print(f"Warped normalized coordinates (= coordinates in upscaled thermal image): ({normalized[0][0]}, {normalized[1][0]})")
    print("Thermal image upscale factor: ", upscale_factor)
    thermal_img_pixel = normalized / upscale_factor
    print(f"Thermal image pixel coordinates (in rotated image): ({int(thermal_img_pixel[0][0])}, {int(thermal_img_pixel[1][0])})")
    print(f"Thermal image pixel coordinates (in original image): ({int(160 - thermal_img_pixel[1][0])}, {int(thermal_img_pixel[0][0])})")
    return int(160 - thermal_img_pixel[1][0]), int(thermal_img_pixel[0][0])


def main():
    print("Reading images")
    hololens_img = cv2.imread("CaptureSmall.jpg")
    # rotate thermal image so both images are oriented the same way for better result
    thermal_img = cv2.rotate(cv2.imread("thermal_image.png"), cv2.ROTATE_90_COUNTERCLOCKWISE)
    # upscale thermal image for better results
    # TODO: maybe try different rescale factors?
    thermal_img = cv2.resize(thermal_img, (369, 492))
    
    # Apply blurring
    hololens_img = cv2.GaussianBlur(hololens_img, (99,99), cv2.BORDER_DEFAULT)
    thermal_img = cv2.GaussianBlur(thermal_img, (9,9), cv2.BORDER_DEFAULT)

    # Create grayscale images
    hololens_img = cv2.cvtColor(hololens_img, cv2.COLOR_BGR2GRAY)
    thermal_img = cv2.cvtColor(thermal_img, cv2.COLOR_BGR2GRAY)

    output, H = match_SIFT_features(hololens_img, thermal_img)
    cv2.imshow("Output", output)

    #show = np.vstack((hololens_img, output))
    #cv2.imshow("Output", show)

    # keep window open until closed (ESC or X button)
    while True:
        key = cv2.waitKey(250)
        if key == 27 or cv2.getWindowProperty("Output", cv2.WND_PROP_VISIBLE) < 1:
            cv2.destroyAllWindows()
            break

    thermal_img_upscale_factor = thermal_img.shape[0] / 160
    x,y = warp_pixel(846, 391, H, thermal_img_upscale_factor)


if __name__ == "__main__":
    main()