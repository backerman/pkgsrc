# $NetBSD: Makefile,v 1.12 2017/03/12 18:52:48 adam Exp $

DISTNAME=	djangorestframework-3.6.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	www python
MASTER_SITES=	${MASTER_SITE_PYPI:=d/djangorestframework/}

MAINTAINER=	adam@NetBSD.org
HOMEPAGE=	http://django-rest-framework.org/
COMMENT=	Lightweight REST framework for Django
LICENSE=	modified-bsd

DEPENDS+=	${PYPKGPREFIX}-django-[0-9]*:../../www/py-django

USE_LANGUAGES=		# empty

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
