using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShaderTest : MonoBehaviour
{
    public int count = 20; // * 160;

    public Vector4[] positions;
    public float[] radiuses;
    public float[] intensities;
    public Vector4[] properties;
    public Material material;

    void Start()
    {
        positions = new Vector4[count];
        radiuses = new float[count];
        intensities = new float[count];
        properties = new Vector4[count];

        for (int i = 0; i < positions.Length; i++)
        {
            radiuses[i] = 4.25f;
            positions[i] = new Vector4(Random.Range(-0.4f, +0.4f), Random.Range(-0.4f, +0.4f));
            intensities[i] = Random.Range(0.5f, 1f);
        }
        //UpdateShader(null);
    }

    void Update()
    {
        material.SetInt("_Points_Length", positions.Length);
        for (int i = 0; i < positions.Length; i++)
        {
            positions[i] += new Vector4(Random.Range(-0.1f, +0.1f), Random.Range(-0.1f, +0.1f), 0) * Time.deltaTime;
            properties[i] = new Vector4(radiuses[i], intensities[i], 0, 0);
        }

        material.SetVectorArray("_Points", positions);
        material.SetVectorArray("_Properties", properties);
    }
}
