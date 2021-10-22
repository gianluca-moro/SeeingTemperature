using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using Newtonsoft.Json;
using UnityEngine;

namespace LeptonTcpClient
{
    class TcpClient
    {
        private static readonly IPAddress _ipAddress = IPAddress.Parse("10.5.177.178");
        private static readonly int _port = 5555;
        private static readonly IPEndPoint _remoteEndPoint = new IPEndPoint(_ipAddress, _port);

        private static readonly int bufferSize = 32768;
        private static readonly string sendFrameMessage = "send_frame";
        private const string EOF = "<EOF>";

        private Socket sender = null;

        public int Setup()
        {
            int ret = -1;
            // Connect to a remote device.  
            try
            {
                // Create a TCP/IP socket.  
                sender = new Socket(_ipAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);

                // Connect the socket to the remote endpoint. Catch any errors.  
                try
                {
                    sender.Connect(_remoteEndPoint);
                    Debug.Log("Buffer size: " + sender.ReceiveBufferSize);

                    Debug.Log("Socket connected to " + sender.RemoteEndPoint);
                    ret = 0;
                }
                catch (ArgumentNullException ane)
                {
                    Debug.Log("ArgumentNullException : " + ane.ToString());
                }
                catch (SocketException se)
                {
                    Debug.Log("SocketException : " + se.ToString());
                }
                catch (Exception e)
                {
                    Debug.Log("Unexpected exception : " + e.ToString());
                }

            } catch (Exception e)
            {
                Debug.Log(e.ToString());
            }
            return ret;
        }

        public void Cleanup()
        {
            if (sender != null) {
                try
                {
                    // Release the socket.  
                    sender.Shutdown(SocketShutdown.Both);
                    sender.Close();
                    sender = null;
                } catch (Exception e)
                {
                    Debug.Log(e.ToString());
                }
            }
        }

        public ThermalData GetSingleFrame()
        {
            ThermalData thermalData = null;
            if (sender != null)
            {
                // Send the data through the socket.  
                SendAll(sendFrameMessage, sender);

                // Receive the response from the remote device.
                var dataString = ReceiveAll(sender);
                //Console.WriteLine("Received:\n{0}", dataString);

                // Deserialize
                thermalData = JsonConvert.DeserializeObject<ThermalData>(dataString);
                //Console.WriteLine("Resolution: ({0}, {1})", thermalData?.Temperatures[0].Length, thermalData?.Temperatures.Length);

                SendAll("complete", sender);
            }

            return thermalData;
        }

        public void GetMultipleFrames(int numFrames = -1)
        {
            if (numFrames == 0)
            {
                Debug.Log("No frames to return");
                return;
            }

            var frameCounter = 0;

            if (sender != null)
            {
                while (numFrames == -1 || frameCounter < numFrames)
                {
                    // Send the data through the socket.  
                    SendAll(sendFrameMessage, sender);

                    // Receive the response from the remote device.
                    var dataString = ReceiveAll(sender);
                    //Console.WriteLine("Received:\n{0}", dataString);

                    // Deserialize
                    var thermalData = JsonConvert.DeserializeObject<ThermalData>(dataString);
                    Console.WriteLine("Frame: " + frameCounter++);
                    Console.WriteLine("Resolution: ({0}, {1})", thermalData?.Temperatures[0].Length, thermalData?.Temperatures.Length);
                }

                SendAll("complete", sender);
            }
        }

        private string ReceiveAll(Socket socket)
        {
            var data = string.Empty;
            var bytes = new byte[bufferSize];
            var total = 0;

            while (true)
            {
                var bytesRec = socket.Receive(bytes);
                var recvData = Encoding.UTF8.GetString(bytes, 0, bytesRec);
                data += recvData;

                total += bytesRec;
                //Console.WriteLine("Received: {0}, Total: {1}", bytesRec, total);

                if (recvData.IndexOf("<EOF>", StringComparison.InvariantCulture) > -1)
                {
                    break;
                }
            }
            String[] st = new String[] {"<EOF>"};
            return data.Split(st, StringSplitOptions.None)[0];
        }

        private int SendAll(string message, Socket socket)
        {
            return socket.Send(Encoding.UTF8.GetBytes(message + EOF));
        }
    }
}
