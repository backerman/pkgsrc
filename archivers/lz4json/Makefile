# $NetBSD: Makefile,v 1.1 2016/09/19 08:02:11 wiz Exp $

DISTNAME=	lz4json-0.0.20160401
CATEGORIES=	archivers www
MASTER_SITES=	${MASTER_SITE_GITHUB:=andikleen/}
GITHUB_TAG=	e3e6365ded1b5dcfe1ce69ce2c764dd010526c81

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/andikleen/lz4json
COMMENT=	Unpack lz4json files as generated by Firefox's bookmark backups
LICENSE=	2-clause-bsd

USE_TOOLS+=		pkg-config

INSTALLATION_DIRS=	bin

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} lz4jsoncat.c -o lz4jsoncat `pkg-config --libs liblz4` `pkg-config --cflags liblz4`

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lz4jsoncat ${DESTDIR}${PREFIX}/bin

.include "../../archivers/lz4/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
