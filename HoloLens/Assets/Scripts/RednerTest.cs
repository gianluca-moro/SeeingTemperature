using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;

public class RednerTest : MonoBehaviour
{
    GameObject m_Canvas = null;
    Renderer m_CanvasRenderer = null;
    public TextMesh minText;
    public TextMesh maxText;

    private LeptonTcpClient.TcpClient client = null;
    private Thread t;
    private bool isRunning = true;

    // Start is called before the first frame update
    void Start()
    {
        Canvas_UP();
        client = new LeptonTcpClient.TcpClient();
        client.Setup();
        InvokeRepeating("test", 0f, 1);
    }

    void Canvas_UP()
    {
        m_Canvas = GameObject.CreatePrimitive(PrimitiveType.Quad);
        m_Canvas.name = "PhotoCaptureCanvas";
        m_Canvas.transform.localScale = new Vector3(2, 2, 1);
    }

    // Update is called once per frame
    void Update()
    {
    }

    public float[][] Transpose(float[][] data)
    {
        float[][] ret = new float[data[0].Length][];
        for(int i = 0; i < data[0].Length; i++)
        {
            ret[i] = new float[data.Length];
            for(int j = 0; j < data.Length; j++)
            {
                ret[i][j] = data[j][i];
            }
        }
        return ret;
    }

    public void test()
    {
        // float[][] data = GetDummyData();
        float[][] data = client.GetSingleFrame().Temperatures;  // GetDummyData();
        if (data != null)
        {
            data = Transpose(data);
            Texture2D targetTexture = new Texture2D(data[0].Length, data.Length);

            // From left to right and BOTTOM to TOP
            /*
            Color[] colors = new Color[data.Length * data[0].Length];
            for(int i = 0; i < data.Length; i++)
            {
                for(int j = 0; j < data[0].Length; j++)
                {
                    if(i > 70)
                    {
                        colors[i * data[0].Length + j] = Color.red;
                    } else
                    {
                        colors[i * data[0].Length + j] = Color.Lerp(Color.blue, Color.red, ((data[data.Length - i - 1][j] - 10) / 30) % 1);
                    }
                }
            }
            */
            // targetTexture.SetPixels(colors);
            float min = data[0][0];
            float max = data[0][0];


            for (int i = 0; i < data.Length; i++)
            {
                for (int j = 0; j < data[0].Length; j++)
                {
                    if (min > data[i][j])
                    {
                        min = data[i][j];
                    }
                    if (max < data[i][j])
                    {
                        max = data[i][j];
                    }
                }
            }


            minText.text = min.ToString() + "C°";
            maxText.text = max.ToString() + "C°";

            for (int i = 0; i < data.Length; i++)
            {
                for (int j = 0; j < data[0].Length; j++)
                {
                    targetTexture.SetPixel(j, i, Color.Lerp(Color.blue, Color.red, (data[i][j] - min) / (max - min)));
                }
            }
            /*
            for (int i = 0; i < data.Length; i++)
            {
                for (int j = 0; j < data[0].Length; j++)
                {
                    float val = data[i][j];
                    if(val < 0)
                    {
                        targetTexture.SetPixel(j, i, Color.Lerp(Color.cyan, Color.blue, (data[i][j]) / (min)));
                    } else if (val < 40)
                    {
                        targetTexture.SetPixel(j, i, Color.Lerp(Color.cyan, Color.red, (data[i][j]) / (40)));
                    } else
                    {
                        targetTexture.SetPixel(j, i, Color.Lerp(Color.red, Color.yellow, (data[i][j] - 40) / (max - 40)));
                    }
                }
            }
            */

            targetTexture.Apply();
            m_CanvasRenderer = m_Canvas.GetComponent<Renderer>() as Renderer;
            m_CanvasRenderer.material = new Material(Shader.Find("AR/HolographicImageBlend"));
            Matrix4x4 cameraToWorldMatrix = Camera.main.cameraToWorldMatrix;
            Matrix4x4 worldToCameraMatrix = cameraToWorldMatrix.inverse;

            Vector3 position = cameraToWorldMatrix.GetColumn(3) - cameraToWorldMatrix.GetColumn(2);
            Quaternion rotation = Quaternion.LookRotation(-cameraToWorldMatrix.GetColumn(2), cameraToWorldMatrix.GetColumn(1));

            Matrix4x4 projectionMatrix = Camera.main.cameraToWorldMatrix;
            targetTexture.wrapMode = TextureWrapMode.Clamp;

            // Setup for the Shader
            m_CanvasRenderer.sharedMaterial.SetTexture("_MainTex", targetTexture);
            m_CanvasRenderer.sharedMaterial.SetMatrix("_WorldToCameraMatrix", worldToCameraMatrix);
            m_CanvasRenderer.sharedMaterial.SetMatrix("_CameraProjectionMatrix", projectionMatrix);
            m_CanvasRenderer.sharedMaterial.SetFloat("_VignetteScale", 1.0f);

            // Set the position of the Canvas
            m_Canvas.transform.position = position;
            m_Canvas.transform.rotation = rotation;
        }
    }

    void DataProcessing()
    {
        if (client.Setup() == 0)
        {
            while (isRunning)
            {
                test();
                Thread.Sleep(200);
            }
            client.Cleanup();
        }
    }

    public float[][] GetDummyData()
    {
        System.Random rnd = new System.Random();
        float[][] ret = new float[128][];
        for (int i = 0; i < ret.Length; i++)
        {
            ret[i] = new float[169];
            for (int j = 0; j < ret[i].Length; j++)
            {
                ret[i][j] = rnd.Next(15) + 20;
            }
        }
        return ret;
    }

    private void OnApplicationQuit()
    {
        isRunning = false;
    }
}
