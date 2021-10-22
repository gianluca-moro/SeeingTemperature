using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Logic : MonoBehaviour
{
    public GameObject visualizer;
    public TMP_Text text;
    public float temperature = 36;
    public Material normal;
    public Material cold;
    public Material fever;
    public Material highFever;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    /* Wikipedia:
     * 36,3 bis 37,4 °C 	Normaltemperatur (afebril)
     * 37,5 bis 38,0 °C 	erhöhte Temperatur (subfebril)
     * 38,1 bis 38,5 °C 	leichtes Fieber (febril)
     * 38,6 bis 39,0 °C 	Fieber
     * 39,1 bis 39,9 °C 	hohes Fieber
     * 40 bis 42 °C 	sehr hohes Fieber (hyperpyretisches Fieber), Krämpfe 
     * 
     */

    // Update is called once per frame
    void Update()
    {
        Material currentMaterial = normal;
        if (temperature < 36.5)
        {
            currentMaterial = cold;
        } else if(temperature > 38.5)
        {
            if(temperature <= 39)
            {
                currentMaterial = fever;
            } else
            {
                currentMaterial = highFever;
            }
        }

        visualizer.GetComponent<Renderer>().material = currentMaterial;
        text.text = temperature.ToString() + "C°";
    }
}
