# $NetBSD: Makefile,v 1.7 2017/01/01 14:43:55 wiz Exp $

DISTNAME=	oauth2-1.5.211
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	python security www
MASTER_SITES=	${MASTER_SITE_PYPI:=o/oauth/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://pypi.python.org/pypi/oauth2/
COMMENT=	Python OAuth2 library
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-httplib2>=0.7.7:../../www/py-httplib2

PYTHON_VERSIONS_INCOMPATIBLE=	34 35 36 # not yet ported as of 1.5.211

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
