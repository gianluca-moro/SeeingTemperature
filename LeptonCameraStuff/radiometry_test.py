import sys
import os

import time
import cv2
import numpy as np

from queue import Queue

sys.path.insert(0, os.path.abspath("."))
from uvctypes import *


BUF_SIZE = 2
q = Queue(BUF_SIZE)


def py_frame_callback(frame, userptr):
    array_pointer = cast(frame.contents.data, POINTER(c_uint16 * (frame.contents.width * frame.contents.height)))
    data = np.frombuffer(
        array_pointer.contents, dtype=np.dtype(np.uint16)
    ).reshape(
        frame.contents.height, frame.contents.width
    ) # no copy

    if frame.contents.data_bytes != (2 * frame.contents.width * frame.contents.height):
        return

    if not q.full():
        q.put(data)


PTR_PY_FRAME_CALLBACK = CFUNCTYPE(None, POINTER(uvc_frame), c_void_p)(py_frame_callback)


def ktof(val):
    return 1.8 * ktoc(val) + 32.0


def ktoc(val):
    return (val - 27315) / 100.0


def raw_to_8bit(data):
    cv2.normalize(data, data, 0, 65535, cv2.NORM_MINMAX)
    np.right_shift(data, 8, data)
    # return cv2.cvtColor(np.uint8(data), cv2.COLOR_GRAY2RGB)
    return np.uint8(data)


def display_temperature(img, val_k, loc, color):
    val = ktof(val_k)
    cv2.putText(img,"{0:.1f} degF".format(val), loc, cv2.FONT_HERSHEY_SIMPLEX, 0.75, color, 2)
    x, y = loc
    cv2.line(img, (x - 2, y), (x + 2, y), color, 1)
    cv2.line(img, (x, y - 2), (x, y + 2), color, 1)


class LeptonCam:
    def __init__(self):
        self.ctx = POINTER(uvc_context)()
        self.dev = POINTER(uvc_device)()
        self.devh = POINTER(uvc_device_handle)()
        ctrl = uvc_stream_ctrl()

        res = libuvc.uvc_init(byref(self.ctx), 0)
        if res < 0:
            print("uvc_init error")
            exit(1)

        try:
            res = libuvc.uvc_find_device(self.ctx, byref(self.dev), PT_USB_VID, PT_USB_PID, 0)
            if res < 0:
                print("uvc_find_device error")
                exit(1)

            try:
                res = libuvc.uvc_open(self.dev, byref(self.devh))
                if res < 0:
                    print("uvc_open error")
                    exit(1)

                print("device opened!")

                print_device_info(self.devh)
                print_device_formats(self.devh)

                frame_formats = uvc_get_frame_formats_by_guid(self.devh, VS_FMT_GUID_Y16)
                if len(frame_formats) == 0:
                    print("device does not support Y16")
                    exit(1)

                libuvc.uvc_get_stream_ctrl_format_size(self.devh, byref(ctrl), UVC_FRAME_FORMAT_Y16,
                                                       frame_formats[0].wWidth, frame_formats[0].wHeight,
                                                       int(1e7 / frame_formats[0].dwDefaultFrameInterval)
                                                       )

                res = libuvc.uvc_start_streaming(self.devh, byref(ctrl), PTR_PY_FRAME_CALLBACK, None, 0)
                if res < 0:
                    print("uvc_start_streaming failed: {0}".format(res))
                    exit(1)
            finally:
                pass
        finally:
            pass

    @staticmethod
    def get_frame(temperature):
        pixel_count = 0
        data = []
        frame = q.get(True, 500)
        frame = (frame - 27315) / 100.00
        x, y = np.where(frame >= temperature)
        for ii, jj in zip(x, y):
            data.append(np.int16(ii))
            data.append(np.int16(jj))
            data.append(np.float16(frame[ii, jj]))
            pixel_count += 1
        data = np.asarray(data)

        return pixel_count, data

    def stop_stream(self):
        libuvc.uvc_stop_streaming(self.devh)
        libuvc.uvc_unref_device(self.dev)
        libuvc.uvc_exit(self.ctx)
