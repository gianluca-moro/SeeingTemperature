using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThermalData { 
    GameObject m_Canvas = null;
    Renderer m_CanvasRenderer = null;

    public void Render(float[][] data)
    {
        if(m_Canvas == null)
        {
            m_Canvas = GameObject.CreatePrimitive(PrimitiveType.Quad);
            m_Canvas.name = "PhotoCaptureCanvas";
            m_CanvasRenderer = m_Canvas.GetComponent<Renderer>() as Renderer;
            m_CanvasRenderer.material = new Material(Shader.Find("AR/HolographicImageBlend"));
            m_Canvas.transform.localScale = new Vector3(2, 2, 1);
        }

        Texture2D targetTexture = new Texture2D(data[0].Length, data.Length);

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

        for (int i = 0; i < data.Length; i++)
        {
            for (int j = 0; j < data[0].Length; j++)
            {
                targetTexture.SetPixel(j, i, Color.Lerp(Color.blue, Color.red, (data[i][j] - min) / (max - min)));
            }
        }

        targetTexture.Apply();
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
