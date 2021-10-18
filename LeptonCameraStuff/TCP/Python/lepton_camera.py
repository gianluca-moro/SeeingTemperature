'''
    author: Gianluca
    parts copied/adapted from: https://github.com/groupgets/purethermal1-uvc-capture/blob/master/python/uvc-radiometry.py
'''

from uvctypes import *
import numpy as np 
from queue import Queue

BUF_SIZE = 2
q = Queue(BUF_SIZE)

def py_frame_callback(frame, userptr):
    array_pointer = cast(frame.contents.data, POINTER(c_uint16 * (frame.contents.width * frame.contents.height)))
    data = np.frombuffer(
        array_pointer.contents, dtype=np.dtype(np.uint16)
    ).reshape(
        frame.contents.height, frame.contents.width
    )

    if frame.contents.data_bytes != (2 * frame.contents.width * frame.contents.height):
        return

    if not q.full():
        q.put(data)

PTR_PY_FRAME_CALLBACK = CFUNCTYPE(None, POINTER(uvc_frame), c_void_p)(py_frame_callback)


class LeptonCamera:
    def __init__(self):
        self.ctx = POINTER(uvc_context)()
        self.dev = POINTER(uvc_device)()
        self.devh = POINTER(uvc_device_handle)()
        ctrl = uvc_stream_ctrl()

        self.frame_width = -1
        self.frame_height = -1

        res = libuvc.uvc_init(byref(self.ctx), 0)
        if res < 0:
            print("uvc_init error")
            exit(1)

        res = libuvc.uvc_find_device(self.ctx, byref(self.dev), PT_USB_VID, PT_USB_PID, 0)
        if res < 0:
            print("uvc_find_device error")
            exit(1)

        
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
            frame_formats[0].wWidth, frame_formats[0].wHeight, int(1e7 / frame_formats[0].dwDefaultFrameInterval)
        )
        self.frame_width, self.frame_height = frame_formats[0].wWidth, frame_formats[0].wHeight

        res = libuvc.uvc_start_streaming(self.devh, byref(ctrl), PTR_PY_FRAME_CALLBACK, None, 0)
        if res < 0:
            print("uvc_start_streaming failed: {0}".format(res))
            exit(1)


    @staticmethod
    def get_temperature_data():
        temperature_data = q.get(True, 500)
        temperature_data = (temperature_data - 27315) / 100.00      # TODO: wtf does this do??
        return temperature_data


    # TODO: maybe into __del__ method, so that if someone would forget to call this,
    # it would automatically once GC runs on LeptonCamera object
    def stop_cam_stream(self):
        libuvc.uvc_stop_streaming(self.devh)
        libuvc.uvc_unref_device(self.dev)
        libuvc.uvc_exit(self.ctx)
