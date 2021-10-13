'''
    Author: Gianluca Moro
    Description: Creates a single live thermal image using the Lepton IR Camera
'''

from radiometry_test import *
import numpy as np 
import matplotlib.pyplot as plt

def setup_camera():
    print("Starting Lepton camera")
    cam = LeptonCam()
    print("Lepton camera started")
    return cam


def get_raw_temperature_data(cam, temp_threshold=0.0):
    print(f"Getting live temperature data with temperature threshold: {temp_threshold}°C")
    pixel_count, temperature_data = cam.get_frame(temp_threshold)
    print(f"Received {pixel_count} pixels from camera")
    temperature_data = np.asarray(temperature_data).reshape(pixel_count, 3)
    return temperature_data


def create_image(raw_temperature_data, res=(120,160), temp_threshold=0.0):
    print("Creating thermal image")
    temperature_data = np.full(res, temp_threshold)
    for pixel in raw_temperature_data:
        temperature_data[int(pixel[0]), int(pixel[1])] = pixel[2]

    plt.figure()
    plt.imshow(temperature_data, cmap='hot', interpolation='nearest')
    plt.title("Full Thermal Image")
    plt.colorbar()
    plt.show()


def main():
    cam = setup_camera()
    raw_data = get_raw_temperature_data(cam, -10)
    create_image(raw_data)
    cam.stop_stream()


if __name__ == "__main__":
    main()
