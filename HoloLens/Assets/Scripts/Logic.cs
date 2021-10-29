using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using TMPro;
using System.Threading;

public class Logic : MonoBehaviour
{
    public GameObject visualizer;
    public TMP_Text text;
    public TextMesh textMesh;
    public float temperature = 36;
    public Material normal;
    public Material cold;
    public Material fever;
    public Material highFever;

    private LeptonTcpClient.TcpClient client = null;
    private bool isRunning = false;
    private bool recivedTemp = false;
    private Thread t;

    void Start()
    {
        //LeptonTcpClient.TcpClient.GetMultipleFrames(20);
        client = new LeptonTcpClient.TcpClient();
        if(client.Setup() == 0)
        {
            isRunning = true;
            t = new Thread(DataProcessing);
            t.Start();
        } else
        {
            Debug.Log("Connection with Server not established (Logic.cs)");
        }
    }
    /* Wikipedia:
     * 36,3 bis 37,4 °C 	Normaltemperatur (afebril)
     * 37,5 bis 38,0 °C 	erhöhte Temperatur (subfebril)
     * 38,1 bis 38,5 °C 	leichtes Fieber (febril)
     * 38,6 bis 39,0 °C 	Fieber
     * 39,1 bis 39,9 °C 	hohes Fieber
     * 40 bis 42 °C 	    sehr hohes Fieber (hyperpyretisches Fieber), Krämpfe 
     * 
     */

    // Update is called once per frame
    void Update()
    {
        if (recivedTemp)
        {
            Material currentMaterial = normal;
            if (temperature < 36.5)
            {
                currentMaterial = cold;
            }
            else if (temperature > 38.5)
            {
                if (temperature <= 39)
                {
                    currentMaterial = fever;
                }
                else
                {
                    currentMaterial = highFever;
                }
            }
            visualizer.GetComponent<Renderer>().material = currentMaterial;
            if(text != null)
                text.text = temperature.ToString() + "C°";
            if(textMesh != null)
                textMesh.text = temperature.ToString() + "C°";
            recivedTemp = false;
        }
    }

    void DataProcessing()
    {
        Debug.Log("Now reading Thermal data");
        while (isRunning)
        {
            try
            {
                LeptonTcpClient.ThermalData data = client.GetSingleFrame();

                if (data != null && data.Temperatures != null)
                {
                    int i, j;
                    i = data.Temperatures.Length;
                    j = data.Temperatures[0].Length;
                    temperature = data.Temperatures[(int)(i/2)][(int)(j / 2)];
                    recivedTemp = true;
                }
            }
            catch (Exception) { }
        }
    }

    private void OnApplicationQuit()
    {
        if(client != null)
        {
            isRunning = false;
            client.Cleanup();
        }
    }
}
