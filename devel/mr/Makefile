# $NetBSD: Makefile,v 1.23 2017/03/05 12:25:28 schmonz Exp $
#

DISTNAME=		myrepos_1.20170129
PKGNAME=		${DISTNAME:S/_/-/}
CATEGORIES=		devel
MASTER_SITES=		${MASTER_SITE_LOCAL}

MAINTAINER=		schmonz@NetBSD.org
HOMEPAGE=		http://myrepos.branchable.com/
COMMENT=		Treat multiple repositories as one combined repository
LICENSE=		gnu-gpl-v2

DEPENDS+=		p5-libwww-[0-9]*:../../www/p5-libwww
DEPENDS+=		p5-HTML-Parser-[0-9]*:../../www/p5-HTML-Parser
DEPENDS+=		p5-ack-[0-9]*:../../textproc/p5-ack

WRKSRC=			${WRKDIR}/${PKGNAME_NOREV}
USE_LANGUAGES=		# none

BUILD_TARGET+=		build
TEST_TARGET+=		test
USE_TOOLS+=		perl:run

REPLACE_PERL+=  	mr webcheckout

EGDIR=			${PREFIX}/share/examples/mr
INSTALLATION_DIRS=	bin ${PKGMANDIR} ${EGDIR}

post-install:
	set -e; cd ${WRKSRC};						\
	${INSTALL_DATA} mrconfig ${DESTDIR}${EGDIR};			\
	${INSTALL_DATA} mrconfig.complex ${DESTDIR}${EGDIR}

.include "../../mk/bsd.pkg.mk"
