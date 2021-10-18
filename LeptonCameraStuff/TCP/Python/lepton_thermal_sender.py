'''
    author: Gianluca
    description: TCP server which sends Lepton Camera frames (temperature data) to the client
'''

import socket
import json
from lepton_camera import *

HOST = '10.5.177.178'
PORT = 5555
BUFF_SIZE = 4096

lepton_camera = LeptonCamera()
frame_width, frame_height = lepton_camera.frame_width, lepton_camera.frame_height

def recv_all(connection):
    data = b''
    while True:
        part_data = connection.recv(BUFF_SIZE)
        data += part_data

        if len(part_data) < BUFF_SIZE:
            break
        
    return data.decode("utf-8")


def get_temperature_data():
    temperature_data = lepton_camera.get_temperature_data()
    return np.asarray(temperature_data).reshape(frame_height, frame_width)


def send_temperature_data_back(temperature_data, connection):
    serialized_data = json.dumps({'resolution': [frame_width, frame_height], 'temperatures': temperature_data.tolist()}).encode()
    print(len(serialized_data))
    connection.sendall(serialized_data)


def run_server():
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.setsockopt(socket.SOL_SOCKET, socket.SO_SNDBUF, BUFF_SIZE)
        s.bind((HOST, PORT))
        s.listen()

        while True:
            print("Looking for client")
            conn, addr = s.accept()
            print(f"Connected by {addr}")

            # TODO: (gimor) currently the server stops sending once client quits
            #   however, server should keep running (so client can reconnect) until server is stopped

            while True:
                received_msg = recv_all(conn)
                print(f"Message received: '{received_msg}'")

                if received_msg == "send_frame":
                    print("Getting temperature data")
                    temperature_data = get_temperature_data()
                    print("Sending temperature data to client")
                    send_temperature_data_back(temperature_data, conn)
                    
                else:
                    print("Stop sending temperature data")
                    break

def main():
    try:
        run_server()
    finally:
        lepton_camera.stop_cam_stream()


if __name__ == "__main__":
    main()
