# $NetBSD: Makefile,v 1.21 2017/02/11 11:14:45 mef Exp $
#

DISTNAME=		Math-GMP-2.14
PKGNAME=		p5-${DISTNAME}
CATEGORIES=		math perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Math/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Math-GMP/
COMMENT=		Perl 5 module for high speed arbitrary size integer math
LICENSE=		gnu-gpl-v2

#BUILD_DEPENDS+= p5-Module-Signature>=0.50:../../security/p5-Module-Signature
#BUILD_DEPENDS+= p5-Text-SpellChecker>0:../../textproc/p5-Text-SpellChecker
#BUILD_DEPENDS+= p5-Perl-Critic>0:../../devel/p5-Perl-Critic
#BUILD_DEPENDS+= p5-Pod-Spell>0:../../textproc/p5-Pod-Spell
#BUILD_DEPENDS+= p5-Test-Pod>=0.95:../../devel/p5-Test-Pod
BUILD_DEPENDS+= p5-Devel-CheckLib>=0:../../devel/p5-Devel-CheckLib
BUILD_DEPENDS+=	p5-Test-YAML-Meta>=0.03:../../devel/p5-Test-YAML-Meta

PERL5_PACKLIST=		auto/Math/GMP/.packlist

.include "../../devel/gmp/buildlink3.mk"
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
