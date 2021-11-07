using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Windows.WebCam;
using System.Linq;

/*
 * Helpful Links:
 * @Source code: https://docs.microsoft.com/en-us/windows/mixed-reality/develop/unity/locatable-camera-in-unity
 * @Source code: https://forum.unity.com/threads/holographic-photo-blending-with-photocapture.416023/?_ga=2.57872105.210548785.1614215615-862490274.1597860099
 * Camera specification (i.e. set resolution mode etc.): https://docs.microsoft.com/en-us/windows/mixed-reality/develop/advanced-concepts/locatable-camera-overview
 * GitHub for Face detection7tracking: https://github.com/Microsoft/Windows-universal-samples/tree/main/Samples/HolographicFaceTracking
 * 
 */
public class MyPhotoCapture : MonoBehaviour
{
    GameObject m_Canvas = null;
    Renderer m_CanvasRenderer = null;
    private PhotoCapture photoCaptureObject = null;
    private bool SavePhotoToDisk = false;
    private bool m_CapturingPhoto = true;

    // Start is called before the first frame update
    void Start()
    {
        PhotoCapture.CreateAsync(false, OnPhotoCaptureCreated);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void takePhoto()
    {
        if (!m_CapturingPhoto)
        {
            m_CapturingPhoto = true;
            Debug.Log("Taking picture...");
            if (SavePhotoToDisk)
            {

                string filename = string.Format(@"CapturedImage{0}_n.jpg", Time.time);
                string filePath = System.IO.Path.Combine(Application.persistentDataPath, filename);
                photoCaptureObject.TakePhotoAsync(filePath, PhotoCaptureFileOutputFormat.JPG, OnCapturedPhotoToDisk);
            }
            else
            {
                photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);
            }
            m_CapturingPhoto = false;
        }
    }
    /*
     * Store your object, set your parameters, and start Photo Mode
     */
    void OnPhotoCaptureCreated(PhotoCapture captureObject)
    {
        photoCaptureObject = captureObject;

        Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();

        CameraParameters c = new CameraParameters();
        c.hologramOpacity = 0.0f;
        c.cameraResolutionWidth = cameraResolution.width;
        c.cameraResolutionHeight = cameraResolution.height;
        c.pixelFormat = CapturePixelFormat.BGRA32;

        // To many arguments?!
        //captureObject.StartPhotoModeAsync(c, false, OnPhotoModeStarted);
        captureObject.StartPhotoModeAsync(c, OnPhotoModeStarted);
    }

    /*
     * Take a photo and store it on disk or use it directly
     * 
     */
    private void OnPhotoModeStarted(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
            Debug.Log("Ready to take photo");
            m_CapturingPhoto = false;
            //takePhoto();
        }
        else
        {
            Debug.LogError("Unable to start photo mode!");
        }
    }

    /*
     * 
     * You'll then apply your result to a texture and use the common clean-up code above.
     */

    void OnCapturedPhotoToMemory(PhotoCapture.PhotoCaptureResult result, PhotoCaptureFrame photoCaptureFrame)
    {
        if (result.success)
        {
            // Create our Texture2D for use and set the correct resolution
            Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
            Texture2D targetTexture = new Texture2D(cameraResolution.width, cameraResolution.height);
            // Copy the raw image data into our target texture
            photoCaptureFrame.UploadImageDataToTexture(targetTexture);

            // To get the location of the picture in the world
            if (photoCaptureFrame.hasLocationData)
            {
                if (m_Canvas == null)
                {
                    m_Canvas = GameObject.CreatePrimitive(PrimitiveType.Quad);
                    m_Canvas.name = "PhotoCaptureCanvas";
                    m_CanvasRenderer = m_Canvas.GetComponent<Renderer>() as Renderer;
                    m_CanvasRenderer.material = new Material(Shader.Find("AR/HolographicImageBlend"));
                }

                photoCaptureFrame.TryGetCameraToWorldMatrix(out Matrix4x4 cameraToWorldMatrix);
                Matrix4x4 worldToCameraMatrix = cameraToWorldMatrix.inverse;

                Vector3 position = cameraToWorldMatrix.GetColumn(3) - cameraToWorldMatrix.GetColumn(2);
                Quaternion rotation = Quaternion.LookRotation(-cameraToWorldMatrix.GetColumn(2), cameraToWorldMatrix.GetColumn(1));

                photoCaptureFrame.TryGetProjectionMatrix(Camera.main.nearClipPlane, Camera.main.farClipPlane, out Matrix4x4 projectionMatrix);
                targetTexture.wrapMode = TextureWrapMode.Clamp;

                // Setup for the Shader
                m_CanvasRenderer.sharedMaterial.SetTexture("_MainTex", targetTexture);
                m_CanvasRenderer.sharedMaterial.SetMatrix("_WorldToCameraMatrix", worldToCameraMatrix);
                m_CanvasRenderer.sharedMaterial.SetMatrix("_CameraProjectionMatrix", projectionMatrix);
                m_CanvasRenderer.sharedMaterial.SetFloat("_VignetteScale", 1.0f);

                // Set the position of the Canvas
                m_Canvas.transform.position = position;
                m_Canvas.transform.rotation = rotation;
            } else
            {
                Debug.Log("No Location Data found");
            }
        }
    }


    /*
     * After capturing the photo to disk, exit photo mode and then clean up your objects
     */
    void OnCapturedPhotoToDisk(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
            Debug.Log("Saved Photo to disk!");
        }
        else
        {
            Debug.Log("Failed to save Photo to disk");
        }
    }

    private void OnDestroy()
    {
        if(photoCaptureObject != null)
            photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
    }
    /*
     * Clean up code
     */
    void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result)
    {
        photoCaptureObject.Dispose();
        photoCaptureObject = null;
    }
}
