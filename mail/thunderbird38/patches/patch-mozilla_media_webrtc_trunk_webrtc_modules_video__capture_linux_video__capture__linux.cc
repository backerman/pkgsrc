$NetBSD: patch-mozilla_media_webrtc_trunk_webrtc_modules_video__capture_linux_video__capture__linux.cc,v 1.1 2016/04/17 18:22:21 ryoon Exp $

--- mozilla/media/webrtc/trunk/webrtc/modules/video_capture/linux/video_capture_linux.cc.orig	2014-07-18 00:05:42.000000000 +0000
+++ mozilla/media/webrtc/trunk/webrtc/modules/video_capture/linux/video_capture_linux.cc
@@ -25,6 +25,9 @@
 #else
 #include <linux/videodev2.h>
 #endif
+#ifdef HAVE_LIBV4L2
+#include <libv4l2.h>
+#endif
 
 #include <new>
 
@@ -34,6 +37,15 @@
 #include "webrtc/system_wrappers/interface/thread_wrapper.h"
 #include "webrtc/system_wrappers/interface/trace.h"
 
+#ifdef HAVE_LIBV4L2
+#define open	v4l2_open
+#define close	v4l2_close
+#define dup	v4l2_dup
+#define ioctl	v4l2_ioctl
+#define mmap	v4l2_mmap
+#define munmap	v4l2_munmap
+#endif
+
 namespace webrtc
 {
 namespace videocapturemodule
