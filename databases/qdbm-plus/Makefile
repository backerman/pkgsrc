# $NetBSD: Makefile,v 1.9 2015/03/15 19:42:34 hiramatsu Exp $
#

.include "../../databases/qdbm/Makefile.common"

PKGNAME=	qdbm-plus-1.0.0.${QDBM_VERSION}
CATEGORIES=	databases devel

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://fallabs.com/qdbm/xspex.html
COMMENT=	C++ API for QDBM
LICENSE=	gnu-lgpl-v2.1

MY_SUBDIR=	plus
BUILD_DIRS=	${MY_SUBDIR}
CONFIGURE_DIRS=	${MY_SUBDIR}

GNU_CONFIGURE=	yes
USE_LANGUAGES=	c c++
TEST_TARGET=		check

.include "../../databases/qdbm/buildlink3.mk"
.if defined(PTHREAD_TYPE) && ${PTHREAD_TYPE} != "none"
SUBST_CLASSES+=		pthread
SUBST_STAGE.pthread=	pre-configure
SUBST_FILES.pthread=	${MY_SUBDIR}/configure
SUBST_SED.pthread=	-e 's|-lpthread|${PTHREAD_LIBS}|'
.endif
.include "../../mk/bsd.pkg.mk"
