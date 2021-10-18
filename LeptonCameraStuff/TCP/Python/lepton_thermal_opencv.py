'''
    author: Gianluca
    description: TCP client which receives Lepton Camera frame(s) (temperature data) from the server
        using OpenCV to display the temperature data
    usage: 
        single frame (default): 
            'python3 lepton_tcp_client.py' will receive a single frame
        multiple frames: 
            'python3 lepton_tcp_client.py -m' or 'python3 lepton_tcp_client.py --multiple'
                will keep receiving frames until client is stopped
            'python3 lepton_tcp_client.py -m <num_frames>' or 'python3 lepton_tcp_client.py --multiple <num_frames>'
                where <num_frames> is a positive integer, will return num_frames frames   
'''

import socket
import json

from numpy.lib.function_base import interp
from lepton_camera import *
import matplotlib.pyplot as plt
import sys
import os
import numpy as np
import cv2

HOST = '10.5.177.178'
PORT = 5555
BUFF_SIZE = 4096

MESSAGE = 'send_frame'
MESSAGE_ENCODED = MESSAGE.encode()

# https://learnopencv.com/applycolormap-for-pseudocoloring-in-opencv-c-python/
COLOR_MAP = cv2.COLORMAP_JET

def recv_all(connection):
    data = b''
    while True:
        part_data = connection.recv(BUFF_SIZE)
        data += part_data

        if len(part_data) < BUFF_SIZE:
            break
        
    return data.decode("utf-8")


def get_multiple_frames(num_frames=-1):
    if num_frames == 0:
        print("No frames to return")
        return

    if num_frames > 0:
        print(f"Getting {num_frames} frames")

    frame_counter = 0
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        print("Connecting to server")
        s.connect((HOST, PORT))
        print("Connection established")

        try:
            while (True if num_frames == -1 else frame_counter < num_frames):
                print(f"Sending message: '{MESSAGE}'")
                s.sendall(MESSAGE_ENCODED)
                print("Waiting for data")
                data = recv_all(s)
                deserialized_data = json.loads(data)
                res = deserialized_data['resolution']
                temperature_data = np.asarray(deserialized_data['temperatures'])
                #print("Temperature data received")
                #print("Shape: ", np.shape(temperature_data))
                #print("Resolution: ", res)
                print("Frame: ", frame_counter)
                frame_counter += 1

                normed = cv2.normalize(temperature_data, None, 0, 255, cv2.NORM_MINMAX, cv2.CV_8U)
                colored = cv2.applyColorMap(normed, COLOR_MAP)
                cv2.imshow("Thermal Live Video", colored)
                key = cv2.waitKey(100)
                if key == 27 or cv2.getWindowProperty("Thermal Live Video", cv2.WND_PROP_VISIBLE) < 1: # ESC key or X button
                    break
                
            s.sendall("complete".encode())
                
        except KeyboardInterrupt:
            print("\nStop sending frames")
            s.sendall("stop".encode())
            print("Exit program")
            try:
                sys.exit(0)
            except SystemExit:
                os._exit(0)



def get_single_frame():
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        print("Connecting to server")
        s.connect((HOST, PORT))
        print("Connection established")
        print(f"Sending message: '{MESSAGE}'")
        s.sendall(MESSAGE_ENCODED)

        print("Waiting for data")
        data = recv_all(s)
        deserialized_data = json.loads(data)
        res = deserialized_data['resolution']
        temperature_data = np.asarray(deserialized_data['temperatures'])
        print("Temperature data received")
        print("Shape: ", np.shape(temperature_data))
        print("Resolution: ", res)

        s.sendall("complete".encode())

        print("Creating thermal image")
        normed = cv2.normalize(temperature_data, None, 0, 255, cv2.NORM_MINMAX, cv2.CV_8U)
        colored = cv2.applyColorMap(normed, COLOR_MAP)
        cv2.imshow("Thermal Image", colored)
        cv2.waitKey(0)  


def main():
    args = sys.argv[1:]
    arg = args[0] if len(args) > 0 else ''
    if len(args) == 0:
        get_single_frame()
    elif arg == '-m' or arg == '--multiple':
        num_frames = int(args[1]) if len(args) > 1 else -1
        get_multiple_frames(num_frames)
    else:
        print("Unkown command. Possible options:" \
            + "\n\tProviding no additional command will send a single frame (Default)"
            + "\n\t'-m' or '--multiple' to keep receiving frames until client is stopped" \
            + "\n\t'-m <num_frames>' or '--multiple <num_frames>' for receiving num_frames frames")


if __name__ == "__main__":
    main()