import cv2
import numpy as np

'''
    using this so I can see the exact pixel coordinates
'''

img = cv2.imread('thermal_image_small.png')
#img = cv2.rotate(img, cv2.ROTATE_90_COUNTERCLOCKWISE)
cv2.imshow("Output", img)
# keep window open until closed (ESC or X button)
while True:
    key = cv2.waitKey(250)
    if key == 27 or cv2.getWindowProperty("Output", cv2.WND_PROP_VISIBLE) < 1:
        cv2.destroyAllWindows()
        break
