#pragma once

// Includes various BSD-specific functions
/*
#include <stdio.h>
#include <sys/stat.h>
#include <inttypes.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/cdefs.h>
#include <signal.h>
#include <stddef.h>

typedef unsigned char u_char;
typedef unsigned int u_int;

#ifndef DEFFILEMODE
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH) // 0666
#endif

#define	MNT_LOCAL	0x00001000
#define MNT_NOWAIT	2
*/
//#define	MFSNAMELEN	16	/* length of fs type name, including nul */


// Specifically the portions of sys/stat.h that do not overlap with musl's version
/*
 * Definitions of flags stored in file flags word.
 *
 * Super-user and owner changeable flags.
 */
//#define	UF_SETTABLE	0x0000ffff	/* mask of owner changeable flags */
//#define	UF_NODUMP	0x00000001	/* do not dump file */
//#define	UF_IMMUTABLE	0x00000002	/* file may not be changed */
//#define	UF_APPEND	0x00000004	/* writes to file may only append */
//#define	UF_OPAQUE	0x00000008	/* directory is opaque wrt. union */
/*
 * Super-user changeable flags.
 */
//#define	SF_SETTABLE	0xffff0000	/* mask of superuser changeable flags */
//#define	SF_ARCHIVED	0x00010000	/* file is archived */
//#define	SF_IMMUTABLE	0x00020000	/* file may not be changed */
//#define	SF_APPEND	0x00040000	/* writes to file may only append */
/*
#define IPV6_MAXPACKET	65535

#define	IPTOS_DSCP_CS0		0x00
#define	IPTOS_DSCP_CS1		0x20
#define	IPTOS_DSCP_CS2		0x40
#define	IPTOS_DSCP_CS3		0x60
#define	IPTOS_DSCP_CS4		0x80
#define	IPTOS_DSCP_CS5		0xa0
#define	IPTOS_DSCP_CS6		0xc0
#define	IPTOS_DSCP_CS7		0xe0

#define IPV6_MAXHLIM	255

#define	RT_TABLEID_MAX		255

#define	_PATH_LOGIN_CONF_D	"/etc/login.conf.d"
#define	_PATH_LOGIN_CONF	"/etc/login.conf"

#define	REG_STARTEND	00004

#define	_PATH_DEVDB	"/var/run/dev.db"

#define	WAIT_ANY	(-1)

long long strtonum(const char *nptr, long long minval, long long maxval, const char **errstr);

int chflags(const char *path, unsigned int flags);

#define EFTYPE		79

#define	M_32_SWAP(a) {							\
	u_int32_t _tmp = a;						\
	((char *)&a)[0] = ((char *)&_tmp)[3];				\
	((char *)&a)[1] = ((char *)&_tmp)[2];				\
	((char *)&a)[2] = ((char *)&_tmp)[1];				\
	((char *)&a)[3] = ((char *)&_tmp)[0];				\
}
#define	P_32_COPY(a, b) {						\
	((char *)&(b))[0] = ((char *)&(a))[3];				\
	((char *)&(b))[1] = ((char *)&(a))[2];				\
	((char *)&(b))[2] = ((char *)&(a))[1];				\
	((char *)&(b))[3] = ((char *)&(a))[0];				\
}
#define	M_16_SWAP(a) {							\
	u_int16_t _tmp = a;						\
	((char *)&a)[0] = ((char *)&_tmp)[1];				\
	((char *)&a)[1] = ((char *)&_tmp)[0];				\
}
#define	P_16_COPY(a, b) {						\
	((char *)&(b))[0] = ((char *)&(a))[1];				\
	((char *)&(b))[1] = ((char *)&(a))[0];				\
}

#define PT_OPENBSD_RANDOMIZE	0x65a3dbe6

int fmt_scaled(long long number, char *result);

int radixsort(const u_char **a, int n, const u_char *tab, u_int endch);

int sradixsort(const u_char **a, int n, const u_char *tab, u_int endch);


#ifndef UTIME_NOW
#define UTIME_NOW	((1l << 30) - 1l)
#endif

#ifndef UTIME_OMIT
#define UTIME_OMIT 0x3ffffffe
#endif*/
