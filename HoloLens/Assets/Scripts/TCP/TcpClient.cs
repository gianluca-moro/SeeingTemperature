using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using Newtonsoft.Json;

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

        static void Main(string[] args)
        {
            // Note: currently, if you exit the program with CTRL + C or X button, the lepton_thermal_sender.py (server) will crash
            // -> TODO: fix

            //GetSingleFrame();
            GetMultipleFrames(20);
        }

        public static void GetSingleFrame()
        {
            // Connect to a remote device.  
            try
            {
                // Create a TCP/IP socket.  
                Socket sender = new Socket(_ipAddress.AddressFamily,
                    SocketType.Stream, ProtocolType.Tcp);

                // Connect the socket to the remote endpoint. Catch any errors.  
                try
                {
                    sender.Connect(_remoteEndPoint);
                    Console.WriteLine("Buffer size: " + sender.ReceiveBufferSize);

                    Console.WriteLine("Socket connected to {0}", sender.RemoteEndPoint);

                    // Send the data through the socket.  
                    SendAll(sendFrameMessage, sender);

                    // Receive the response from the remote device.
                    var dataString = ReceiveAll(sender);
                    //Console.WriteLine("Received:\n{0}", dataString);

                    // Deserialize
                    var thermalData = JsonConvert.DeserializeObject<ThermalData>(dataString);
                    Console.WriteLine("Resolution: ({0}, {1})", thermalData?.Temperatures[0].Length, thermalData?.Temperatures.Length);

                    SendAll("complete", sender);

                    // Release the socket.  
                    sender.Shutdown(SocketShutdown.Both);
                    sender.Close();

                } catch (ArgumentNullException ane)
                {
                    Console.WriteLine("ArgumentNullException : {0}", ane.ToString());
                } catch (SocketException se)
                {
                    Console.WriteLine("SocketException : {0}", se.ToString());
                } catch (Exception e)
                {
                    Console.WriteLine("Unexpected exception : {0}", e.ToString());
                }

            } catch (Exception e)
            {
                Console.WriteLine(e.ToString());
            }
        }

        public static void GetMultipleFrames(int numFrames = -1)
        {
            if (numFrames == 0)
            {
                Console.WriteLine("No frames to return");
                return;
            }

            var frameCounter = 0;

            // Connect to a remote device.  
            try
            {
                // Create a TCP/IP socket.  
                Socket sender = new Socket(_ipAddress.AddressFamily,
                    SocketType.Stream, ProtocolType.Tcp);

                // Connect the socket to the remote endpoint. Catch any errors.  
                try
                {
                    sender.Connect(_remoteEndPoint);
                    Console.WriteLine("Buffer size: " + sender.ReceiveBufferSize);

                    Console.WriteLine("Socket connected to {0}", sender.RemoteEndPoint);

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

                    // Release the socket.  
                    sender.Shutdown(SocketShutdown.Both);
                    sender.Close();

                }
                catch (ArgumentNullException ane)
                {
                    Console.WriteLine("ArgumentNullException : {0}", ane.ToString());
                }
                catch (SocketException se)
                {
                    Console.WriteLine("SocketException : {0}", se.ToString());
                }
                catch (Exception e)
                {
                    Console.WriteLine("Unexpected exception : {0}", e.ToString());
                }

            } catch (Exception e)
            {
                Console.WriteLine(e.ToString());
            }
        }

        private static string ReceiveAll(Socket socket)
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

        private static int SendAll(string message, Socket socket)
        {
            return socket.Send(Encoding.UTF8.GetBytes(message + EOF));
        }
    }
}
