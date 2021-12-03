using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using TMPro;
using System.Threading;
using CameraCalibration

public class Logic : MonoBehaviour
{
    public GameObject thermometer;
    public GameObject thermalImage;
    public GameObject thermalDetector;
    public TextMesh textMesh;
    public float temperature = 30;
    public Material normal;
    public Material cold;
    public Material fever;
    public Material highFever;
    public MyPhotoCapture photos;

    private LeptonTcpClient.TcpClient client = null;
    private bool isRunning = false;
    private bool recivedTemp = false;
    private Thread t;

    /*
     * Deafult: mode = 0;
     * mode = 0: Normale Temperatur lesen mit Fadenkreuz
     * mode = 1: Thermal image
     * mode = 2: Thermal detector
     */
    private int mode = 0;

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
     * 36,3 bis 37,4 �C 	Normaltemperatur (afebril)
     * 37,5 bis 38,0 �C 	erh�hte Temperatur (subfebril)
     * 38,1 bis 38,5 �C 	leichtes Fieber (febril)
     * 38,6 bis 39,0 �C 	Fieber
     * 39,1 bis 39,9 �C 	hohes Fieber
     * 40 bis 42 �C 	    sehr hohes Fieber (hyperpyretisches Fieber), Kr�mpfe 
     * 
     */

    // Update is called once per frame
    void Update()
    {
        if (recivedTemp)
        {
            if (mode == 1 && textMesh != null)
            {
                textMesh.text = temperature.ToString() + "C�";
            }

            recivedTemp = false;
        }
    }

    private void chooseMaterial()
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
                    x,y = MapPixel(0,0)
                    temperature = data.Temperatures[x][y];
                    recivedTemp = true;
                }
            }
            catch (Exception) { }
        }
    }

    public void ChangeMode(int mode)
    {
        this.mode = mode;
        thermometer.SetActive(false);
        thermalImage.SetActive(false);
        thermalDetector.SetActive(false);
        switch (mode)
        {
            case 0:
                thermometer.SetActive(true);
                photos.deactivateCanvas();
                break;
            case 1:
                thermalImage.SetActive(true);
                photos.takePhoto();
                break;
            case 2:
                photos.deactivateCanvas();
                thermalDetector.SetActive(true);
                break;
            default:
                photos.deactivateCanvas();
                thermometer.SetActive(true);
                break;
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
