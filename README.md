# libcobalt

An OpenBSD-based replacement for libbsd and libmd. It contains OpenBSD implementations of most of the same functions. It also contains various OpenBSD-exclusive facilities, such as ohash, siphash and a working reimplementation of pledge() (credit goes [here](https://github.com/jart/pledge) for going through the trouble of reimplementing it with SECCOMP BPF rules).

Note that some symbols may exist in libbsd but not libcobalt; All of the most important ones (strl\*, fgetln, etc) are included, but I haven't verified that symbol parity is at 100%. If you are looking to replace libbsd on your system with libcobalt, you should do some testing first to make sure everything works. Also, `bsd-overlay` is not currently supported.

This library contains a symbol for `unveil`, but it is currently a stub and doesn't do anything.

## Building
`make` and `make DESTDIR=$PWD/DEST install`

Note that libcobalt contains various files that might conflict with others on your system, such as pkg-config files and symlinks for libbsd and libmd. For this reason, you should take care when installing to make sure that nothing is being overwritten.

## Additional considerations regarding pledge()
The syscalls a program uses varies by C library, e.g. musl uses fewer, whereas glibc systems usually need to have more generous pledge statements.
