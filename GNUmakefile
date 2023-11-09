CFLAGS += -I. -fPIC -Iinclude

HDRS=	base64.h \
	icdb.h \
	md5.h \
	ohash.h \
	readpassphrase.h \
	rmd160.h \
	sha1.h \
	sha2.h \
	siphash.h \
	bsd/util.h \
	vis.h \
	unveil.h \
	sys/endian.h \
	sys/tree.h \
	bsd/err.h \
	bsd/grp.h \
	bsd/limits.h \
	bsd/pwd.h \
	bsd/signal.h \
	bsd/stdio.h \
	bsd/stdlib.h \
	bsd/string.h \
	bsd/unistd.h \
	bsd/sys/cdefs.h \
	bsd/sys/param.h \
	bsd/sys/signal.h \
	bsd/sys/time.h

OBJS =  promises.o \
	pledge.o \
	getprogname.o \
	strtonum.o \
	pwcache.o \
	setmode.o \
	warnc.o \
	vwarnc.o \
	malloc.o \
	errc.o \
	verrc.o \
	getbsize.o \
	fmt_scaled.o \
	ohash.o \
	vis.o \
	unvis.o \
	strmode.o \
	base64.o \
	siphash.o \
	radixsort.o \
	icdb.o \
	md5.o \
	rmd160.o \
	sha1.o \
	sha2.o \
	readpassphrase.o \
	strlcpy.o \
	strlcat.o \
	fgetln.o \
	parsepromises.o \
	pledge-linux.o \
	unveil.o \
	pw_dup.o

all: libcobalt.so

clean:
	rm -fv *.o libcobalt.so libmd.so libbsd.so

libcobalt.so: $(OBJS)
	$(CC) -fPIC -shared $(CFLAGS) $(LDFLAGS) $(OBJS) -o $@

install:
	install -m755 -d "${DESTDIR}/usr/include"
	for i in ${HDRS}; do \
		install -D -m 644 include/$$i ${DESTDIR}/usr/include/$$i; \
	done
	install -m755 -d "${DESTDIR}/usr/lib"
	ln -fs libcobalt.so "${DESTDIR}/usr/lib/libmd.so"
	ln -fs libcobalt.so "${DESTDIR}/usr/lib/libbsd.so"
	install -m755 libcobalt.so "${DESTDIR}/usr/lib"
	install -m755 -d "${DESTDIR}/usr/lib/pkgconfig"
	install -m644 libbsd.pc libmd.pc libcobalt.pc "${DESTDIR}/usr/lib/pkgconfig"
	install -m755 -d "${DESTDIR}/usr/share/man/man2"
	install -m755 -d "${DESTDIR}/usr/share/man/man3"
	install -m644 *.2 "${DESTDIR}/usr/share/man/man2"
	install -m644 *.3 "${DESTDIR}/usr/share/man/man3"

$(OBJS):
	$(CC) $(CFLAGS) $(LDFLAGS) -c $(basename $@).c
