import cv2
import numpy as np

img = cv2.imread('Capture.jpg')
print(f'Original dimensions: {img.shape}')
resized_img = cv2.resize(img, (1920, 1080))
print(f'Resized dimensions: {resized_img.shape}')

cv2.imwrite('CaptureSmall.jpg', resized_img)