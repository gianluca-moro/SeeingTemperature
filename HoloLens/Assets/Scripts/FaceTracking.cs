//code adapteed from: https://docs.microsoft.com/de-de/samples/microsoft/windows-universal-samples/basicfacetracking/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Threading;

#if ENABLE_WINMD_SUPPORT
using Windows.Graphics.Imaging;
using Windows.Media;
using Windows.Media.Capture;
using Windows.Media.FaceAnalysis;
using Windows.Media.MediaProperties;
using Windows.System.Threading; 
using Windows.UI.Xaml.Shapes;
#endif



public class FaceTracking : MonoBehaviour
{
    public GameObject thermalDetector;

    /// <summary>
    /// Holds the current scenario state value.
    /// </summary>
    private ScenarioState currentState = ScenarioState.Idle;



#if ENABLE_WINMD_SUPPORT
    /// <summary>
    /// References a MediaCapture instance; is null when not in Streaming state.
    /// </summary>
    private MediaCapture mediaCapture;

    /// <summary>
    /// Cache of properties from the current MediaCapture device which is used for capturing the preview frame.
    /// </summary>
    private VideoEncodingProperties videoProperties;

    /// <summary>
    /// References a FaceTracker instance.
    /// </summary>
    private FaceTracker faceTracker;

    /// <summary>
    /// A periodic timer to execute FaceTracker on preview frames
    /// </summary>
    private ThreadPoolTimer frameProcessingTimer; 
#endif

    /// <summary>
    /// Flag to ensure FaceTracking logic only executes one at a time
    /// </summary>
    private int busy = 0;


    /// <summary>
    /// Values for identifying and controlling scenario states.
    /// </summary>
    private enum ScenarioState
    {
        /// <summary>
        /// Display is blank - default state.
        /// </summary>
        Idle,

        /// <summary>
        /// Webcam is actively engaged and a live video stream is displayed.
        /// </summary>
        Streaming
    }

    /// <summary>
    /// Creates the FaceTracker object which we will use for face detection and tracking.
    /// Initializes a new MediaCapture instance and starts the Preview streaming to the CamPreview UI element.
    /// </summary>
    /// <returns>Async Task object returning true if initialization and streaming were successful and false if an exception occurred.</returns>
    private async Task<bool> StartWebcamStreamingAsync()
    {
        bool successful = false;
#if ENABLE_WINMD_SUPPORT

        faceTracker = await FaceTracker.CreateAsync();

        try
        {
            this.mediaCapture = new MediaCapture();

            // For this scenario, we only need Video (not microphone) so specify this in the initializer.
            // NOTE: the appxmanifest only declares "webcam" under capabilities and if this is changed to include
            // microphone (default constructor) you must add "microphone" to the manifest or initialization will fail.
            MediaCaptureInitializationSettings settings = new MediaCaptureInitializationSettings();
            settings.StreamingCaptureMode = StreamingCaptureMode.Video;
            await this.mediaCapture.InitializeAsync(settings);

            // Cache the media properties as we'll need them later.
            var deviceController = this.mediaCapture.VideoDeviceController;
            this.videoProperties = deviceController.GetMediaStreamProperties(MediaStreamType.VideoPreview) as VideoEncodingProperties;

            // Immediately start streaming to our CaptureElement UI.
            // NOTE: CaptureElement's Source must be set before streaming is started.

            await this.mediaCapture.StartPreviewAsync();

            // Run the timer at 66ms, which is approximately 15 frames per second.
            TimeSpan timerInterval = TimeSpan.FromMilliseconds(66);
            this.frameProcessingTimer = ThreadPoolTimer.CreatePeriodicTimer(ProcessCurrentVideoFrame, timerInterval);
            successful = true;
        }
        catch (System.UnauthorizedAccessException)
        {
            // If the user has disabled their webcam this exception is thrown; provide a descriptive message to inform the user of this fact.
            Console.WriteLine("Webcam is disabled");
        }
        catch (Exception ex)
        {
            Console.WriteLine(ex.ToString());
        } 
#endif

        return successful;
    }

    /// <summary>
    /// Safely stops webcam streaming (if running) and releases MediaCapture object.
    /// </summary>
    private async Task ShutdownWebcamAsync()
    {
#if ENABLE_WINMD_SUPPORT

        if (this.frameProcessingTimer != null)
        {
            this.frameProcessingTimer.Cancel();
        }

        if (this.mediaCapture != null)
        {
            if (this.mediaCapture.CameraStreamState == Windows.Media.Devices.CameraStreamState.Streaming)
            {
                try
                {
                    await this.mediaCapture.StopPreviewAsync();
                }
                catch (Exception)
                {
                    ;   // Since we're going to destroy the MediaCapture object there's nothing to do here
                }
            }
            this.mediaCapture.Dispose();
        }

        this.frameProcessingTimer = null;
        this.mediaCapture = null; 
#endif
    }

#if ENABLE_WINMD_SUPPORT
    /// <summary>
    /// This method is invoked by a ThreadPoolTimer to execute the FaceTracker and Visualization logic.
    /// </summary>
    /// <param name="timer">Timer object invoking this call</param>
    private async void ProcessCurrentVideoFrame(ThreadPoolTimer timer)
    {
        if (this.currentState != ScenarioState.Streaming)
        {
            return;
        }

        // If busy is already 1, then the previous frame is still being processed,
        // in which case we skip the current frame.
        if (Interlocked.CompareExchange(ref busy, 1, 0) != 0)
        {
            return;
        }

        await ProcessCurrentVideoFrameAsync();
        Interlocked.Exchange(ref busy, 0);
    } 
#endif

    /// <summary>
    /// This method is called to execute the FaceTracker and Visualization logic at each timer tick.
    /// </summary>
    /// <remarks>
    /// Keep in mind this method is called from a Timer and not synchronized with the camera stream. Also, the processing time of FaceTracker
    /// will vary depending on the size of each frame and the number of faces being tracked. That is, a large image with several tracked faces may
    /// take longer to process.
    /// </remarks>
    private async Task ProcessCurrentVideoFrameAsync()
    {
#if ENABLE_WINMD_SUPPORT
        // Create a VideoFrame object specifying the pixel format we want our capture image to be (NV12 bitmap in this case).
        // GetPreviewFrame will convert the native webcam frame into this format.
        const BitmapPixelFormat InputPixelFormat = BitmapPixelFormat.Nv12;
        using (VideoFrame previewFrame = new VideoFrame(InputPixelFormat, (int)this.videoProperties.Width, (int)this.videoProperties.Height))
        {
            try
            {
                await this.mediaCapture.GetPreviewFrameAsync(previewFrame);
            }
            catch (UnauthorizedAccessException)
            {
                // Lost access to the camera.
                Console.WriteLine("lost connection to camera");
                return;
            }
            catch (Exception)
            {
                Console.WriteLine($"PreviewFrame with format '{InputPixelFormat}' is not supported by your Webcam");
                return;
            }

            // The returned VideoFrame should be in the supported NV12 format but we need to verify this.
            if (!FaceDetector.IsBitmapPixelFormatSupported(previewFrame.SoftwareBitmap.BitmapPixelFormat))
            {
                Console.WriteLine($"PixelFormat '{previewFrame.SoftwareBitmap.BitmapPixelFormat}' is not supported by FaceDetector");
                return;
            }

            IList<DetectedFace> faces;
            try
            {
                faces = await this.faceTracker.ProcessNextFrameAsync(previewFrame);
                Debug.Log("Faces detected!");
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.ToString());
                return;
            }

            // Create our visualization using face results but run it on the UI thread.
            //var ignored = this.Dispatcher.RunAsync(Windows.UI.Core.CoreDispatcherPriority.Normal, () =>
            // {
            //     this.SetupVisualization(previewFrameSize, faces);
            // });
        } 
#endif
    }

#if ENABLE_WINMD_SUPPORT
    /// <summary>
    /// Takes the webcam image and FaceTracker results and assembles the visualization onto the Canvas.
    /// </summary>
    /// <param name="framePizelSize">Width and height (in pixels) of the video capture frame</param>
    /// <param name="foundFaces">List of detected faces; output from FaceTracker</param>
    private void SetupVisualization(IList<DetectedFace> foundFaces)
    {
        


        if (this.currentState == ScenarioState.Streaming)
        {

            foreach (DetectedFace face in foundFaces)
            {
                int a =2;
                // write values into a thingy give it back throguh ref value in start mehtod, 

                //Rectangle box = new Rectangle()
                //{
                //    Width = face.FaceBox.Width,
                //    Height = face.FaceBox.Height,
                //    
                //};
                

            }
        }



    }
#endif




    /// <summary>
    /// Manages the scenario's internal state. Invokes the internal methods and updates the UI according to the
    /// passed in state value. Handles failures and resets the state if necessary.
    /// </summary>
    /// <param name="newState">State to switch to</param>
    private async Task ChangeScenarioStateAsync(ScenarioState newState)
    {


        switch (newState)
        {
            case ScenarioState.Idle:

                //this.thermalDetector.Children.Clear();
                this.currentState = newState;
                await this.ShutdownWebcamAsync();


                break;

            case ScenarioState.Streaming:

                if (!await this.StartWebcamStreamingAsync())
                {
                    await this.ChangeScenarioStateAsync(ScenarioState.Idle);
                    break;
                }

                //this.thermalDetector.Children.Clear();
                this.currentState = newState;
                break;
        }
    }

    public async void StartFaceTrack(GameObject thermalDetector)
    {
        if (this.currentState == ScenarioState.Idle)
        {
            await this.ChangeScenarioStateAsync(ScenarioState.Streaming);
            this.thermalDetector = thermalDetector;
            Debug.Log("start facetrack");

        }

    }

    public async void StopFaceTrack()
    {
        if (this.currentState == ScenarioState.Streaming)
        {
            await this.ChangeScenarioStateAsync(ScenarioState.Idle);

        }
    }


    // Start is called before the first frame update
    void Start()
    {


    }

    // Update is called once per frame
    void Update()
    {

    }





}


