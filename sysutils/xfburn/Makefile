# $NetBSD: Makefile,v 1.4 2017/02/12 06:26:02 ryoon Exp $

DISTNAME=	xfburn-0.5.4
PKGREVISION=	3
CATEGORIES=	sysutils
MASTER_SITES=	http://archive.xfce.org/src/apps/xfburn/0.5/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://goodies.xfce.org/projects/applications/xfburn
COMMENT=	Simple CD/DVD burning program for xfce
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake intltool pkg-config

.include "../../devel/glib2/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../sysutils/libburn/buildlink3.mk"
.include "../../sysutils/libisofs/buildlink3.mk"
.include "../../x11/libxfce4ui/buildlink3.mk"
.include "../../x11/xfce4-exo/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
