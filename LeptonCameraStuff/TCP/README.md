# TCP Lepton Camera 
The Lepton Camera streams the frames to the client (either Python or C#) using a TCP connection.

### TCP server (Raspberry Pi)
#### For C# client
To start the TCP server, run the Python file 'lepton_thermal_sender_csharp.py' on the Raspberry Pi: `python3 lepton_thermal_sender_csharp.py` . This will send the frames from the Lepton camera to the connected client.

#### For Python Client
To start the TCP server, run the Python file 'lepton_thermal_sender.py' on the Raspberry Pi: ` python3 lepton_thermal_sender.py` . This will send the frames from the Lepton camera to the connected client.

### TCP client (On different device or on Raspberry Pi)
Note: Make sure that you are connected to the ETH VPN when running the C# program. 

### Receiving frames in C#
You can receive the frames using the C# client by running the "TcpClient.cs" file, e.g. in Visual Studio. In the main function, you can switch between receiving a single frame or recieving multiple frames (either until program exit or a fixed amount of frames)   
The program receivies the frame as a jSON string and puts it into a ThermalData object which contains the resolution and the temperature data itself. 

### Receiving frames in Python 
You can also receive the frames in Python using one of the following files: 'lepton_thermal_matplotlib.py' or 'lepton_thermal_opencv.py', depending on how you want to display the thermal images / live videos. 
If you run the file using ` python3 lepton_thermal_matplotlib.py` , you will receive a single frame from the Lepton camera and it will be displayed as an image. If you run `python3 lepton_thermal_matplotlib.py -m` or `python3 lepton_thermal_matplotlib.py --multiple`, 
you will receive frames until you close the program (CTRL+C) and it will show a live video. You can additionally pass a number of frames ` n` to only receive exactly n frames, e.g. `python3 lepton_thermal_matplotlib.py -m 100`
