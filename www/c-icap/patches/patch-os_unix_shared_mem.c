$NetBSD: patch-os_unix_shared_mem.c,v 1.1 2017/04/24 14:35:01 sborrill Exp $

Support MAP_ANON as a synonym of MAP_ANONYMOUS

--- /pkg_comp/obj/pkgsrc/www/c-icap/default/c_icap-0.4.4/os/unix/shared_mem.c.orig	2017-04-24 14:00:54.000000000 +0000
+++ /pkg_comp/obj/pkgsrc/www/c-icap/default/c_icap-0.4.4/os/unix/shared_mem.c	2017-04-24 14:00:57.000000000 +0000
@@ -29,6 +29,9 @@
 #endif
 #if defined(USE_POSIX_MAPPED_FILES)
 #include <sys/mman.h>
+#if !defined(MAP_ANONYMOUS) && defined(MAP_ANON)
+#define MAP_ANONYMOUS MAP_ANON
+#endif
 #endif
 #include <fcntl.h>
 #include <errno.h>
