# $NetBSD: Makefile,v 1.19 2016/08/16 12:40:20 mef Exp $
#

DISTNAME=	Geo-IPfree-1.151940
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	net
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Geo/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/~bricas/${DISTNAME}/
COMMENT=	Gets country name by IP or hostname
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=	auto/Geo/IPfree/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
