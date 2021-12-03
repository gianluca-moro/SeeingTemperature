using System;

namespace CameraCalibration
{
    public static class CameraCalibration
    {
        // The factor with which the HoloLens image got downscaled during the camera calibration
        private static double _downscaleFactor { get; set; } = 3904.0 / 1920; // = width_original_hololens_img / width_downscaled_hololens_img 
        // TODO: this factor might need to be adjusted because we might actually already use a 1920x1080 HoloLens image, instead of 3904x2196

        // The factor with which the thermal image got upscaled during the camera calibration
        private static double _upscaleFactor { get; set; } = 369.0 / 120; // = width_upscaled_thermal_img / width_original_thermal_img

        // Currently hardcoded homography matrix calculated by Python script
        private static double[][] _homography = new double[][]
        {
            new double[] { 3.7907548397926333e-01, 2.2539819663811609e-02, -1.6377139502293127e+02 },
            new double[] { 1.8722883539177355e-02, 3.8150802183948879e-01, 1.3546483061885007e+02 },
            new double[] { 8.3434084498385530e-05, 4.7968871606718406e-05, 1.0000000000000000e+00 }
        };

        /// <summary>
        /// The 3x3 Homography matrix calculated by the calibration process
        /// </summary>
        public static double[][] Homography
        {
            get => _homography; 
            set
            {
                if (value != null && value.Length == 3 && value[0].Length == 3 && value[1].Length == 3 && value[2].Length == 3)
                {
                    _homography = value;
                }
                else
                {
                    throw new ArgumentException("Homography matrix cannot be null and must be 3x3");
                }
            }
        }

        /// <summary>
        /// <para>Maps HoloLens image pixel coordinates to Thermal image pixel coordinates </para>
        /// </summary>
        /// <param name="x">x-coordinate of original-sized HoloLens image pixel</param>
        /// <param name="y">y-coordinate of original-sized HoloLens image pixel</param>
        /// <returns>The corresponding pixel coordinates [x, y] in the original-sized (160x120) un-rotated thermal image</returns>
        public static int[] MapPixel(int x, int y)
        {
            //Console.WriteLine($"HoloLens image pixel coordinates: ({x}, {y})");

            //Console.WriteLine($"HoloLens image downscale factor: {_downscaleFactor}");
            x = (int)(x / _downscaleFactor);
            y = (int)(y / _downscaleFactor);
            //Console.WriteLine($"Downscaled HoloLens image pixel coordinates: ({x}, {y})");

            var warpedX = _homography[0][0] * x + _homography[0][1] * y + _homography[0][2] * 1.0;
            var warpedY = _homography[1][0] * x + _homography[1][1] * y + _homography[1][2] * 1.0;
            var warpedZ = _homography[2][0] * x + _homography[2][1] * y + _homography[2][2] * 1.0;
            //Console.WriteLine($"Warped homogeneous coordinates: ({warpedX}, {warpedY}, {warpedZ})");

            var normalizedX = warpedX / warpedZ;
            var normalizedY = warpedY / warpedZ;
            //Console.WriteLine($"Warped normalized coordinates (= coordinates in upscaled thermal image): ({normalizedX}, {normalizedY})");

            //Console.WriteLine($"Thermal image upscale factor: {_upscaleFactor}");
            var thermalImgPixelX = normalizedX / _upscaleFactor;
            var thermalImgPixelY = normalizedY / _upscaleFactor;
            //Console.WriteLine($"Thermal image pixel coordinates in rotated image: ({(int) thermalImgPixelX}, {(int) thermalImgPixelY})");
            //Console.WriteLine($"Thermal image pixel coordinates in original image: ({(int) (160 - thermalImgPixelY)}, {(int) thermalImgPixelX})");
            //Console.WriteLine("\n---------------------------------\n");

            return new int[] { (int)(160 - thermalImgPixelY), (int)thermalImgPixelX };
        }


        /// <summary>
        /// <para>Maps HoloLens image pixel coordinates to Thermal image pixel coordinates </para>
        /// </summary>
        /// <param name="x">x-coordinate of original-sized HoloLens image pixel</param>
        /// <param name="y">y-coordinate of original-sized HoloLens image pixel</param>
        /// <param name="homography">The 3x3 Homography matrix calculated by the calibration process</param>
        /// <param name="downscaleFactor">The factor with which the HoloLens image got downscaled during the camera calibration</param>
        /// <param name="upscaleFactor">The factor with which the thermal image got upscaled during the camera calibration</param>
        /// <returns>The corresponding pixel coordinates [x, y] in the original-sized (160x120) un-rotated thermal image</returns>
        public static int[] MapPixel(int x, int y, double[][] homography, double downscaleFactor = 1.0, double upscaleFactor = 1.0)
        {
            if (homography == null) throw new ArgumentNullException(nameof(homography));
            if (!(homography.Length == 3 && homography[0].Length == 3 && homography[1].Length == 3 &&
                  homography[2].Length == 3)) throw new ArgumentException("Homography must be 3x3");
            //Console.WriteLine($"HoloLens image pixel coordinates: ({x}, {y})");

            //Console.WriteLine($"HoloLens image downscale factor: {downscaleFactor}");
            x = (int)(x / downscaleFactor);
            y = (int)(y / downscaleFactor);
            //Console.WriteLine($"Downscaled HoloLens image pixel coordinates: ({x}, {y})");

            var warpedX = homography[0][0] * x + homography[0][1] * y + homography[0][2] * 1.0;
            var warpedY = homography[1][0] * x + homography[1][1] * y + homography[1][2] * 1.0;
            var warpedZ = homography[2][0] * x + homography[2][1] * y + homography[2][2] * 1.0;
            //Console.WriteLine($"Warped homogeneous coordinates: ({warpedX}, {warpedY}, {warpedZ})");

            var normalizedX = warpedX / warpedZ;
            var normalizedY = warpedY / warpedZ;
            //Console.WriteLine($"Warped normalized coordinates (= coordinates in upscaled thermal image): ({normalizedX}, {normalizedY})");

            //Console.WriteLine($"Thermal image upscale factor: {upscaleFactor}");
            var thermalImgPixelX = normalizedX / upscaleFactor;
            var thermalImgPixelY = normalizedY / upscaleFactor;
            //Console.WriteLine($"Thermal image pixel coordinates in rotated image: ({(int) thermalImgPixelX}, {(int) thermalImgPixelY})");
            //Console.WriteLine($"Thermal image pixel coordinates in original image: ({(int) (160 - thermalImgPixelY)}, {(int) thermalImgPixelX})");
            //Console.WriteLine("\n---------------------------------\n");

            return new int[] { (int)(160 - thermalImgPixelY), (int)thermalImgPixelX };
        }

        private static void CalibrateCameras()
        {
            // TODO: here we could call the Python Script which would then calibrate the cameras and return the Homography matrix
            // for now, we just use the hardcoded Homography matrix
            throw new NotImplementedException();

            // _homography = PythonCameraCalibration(...);
        }
    }
}
