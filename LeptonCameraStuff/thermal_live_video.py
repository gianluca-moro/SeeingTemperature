from radiometry_test import *
import numpy as np 
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

globalcam = LeptonCam()

#Author: Eric Enzler. Function that creates an Image from the Lepton camera
def create_img_no_show(res=(120,160), temp_threshold=0.0):
    pixel_count, temperature_data = globalcam.get_frame(temp_threshold)
    temperature_data = np.asarray(temperature_data).reshape(pixel_count, 3)
    tmp = np.full(res, temp_threshold)
    for pixel in temperature_data:
        tmp[int(pixel[0]), int(pixel[1])] = pixel[2]

    print("inb4 returning")
    return tmp


#Author: Eric Enzler
def create_video(res=(120,160), temp_threshold=-10.0):
    temperature_data = create_img_no_show()
    plt.figure()
    im1 = plt.imshow(temperature_data, cmap='hot', interpolation='nearest')

    def update(i):
        im1.set_data(create_img_no_show())

    '''
    Function to create a Video-Like animation. plt.gfc() finds the current Picture.
    update updates the frame with a new one from the camera. We can optionally set 
    'interval = 125' to get 8fps. Currently we wait 200ms before rerunning the update
    '''
    ani = FuncAnimation(plt.gcf(), update)
    plt.show()


def main():
    create_video()


if __name__ == "__main__":
    main()
