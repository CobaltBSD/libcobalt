# libcobalt

An OpenBSD-based replacement for libbsd and libmd. It contains OpenBSD implementations of most of the same functions. It also contains various OpenBSD-exclusive facilities, such as ohash, siphash and a working reimplementation of pledge() (credit goes [here](https://github.com/jart/pledge) for going through the trouble of reimplementing it with BPF rules).

Note that some symbols may exist in libbsd but not libcobalt; All of the most important ones (strl\*, strtonum, etc) are included, but I haven't verified that symbol parity is at 100%. If you are looking to replace libbsd on your system with libcobalt, you should do some testing first to make sure everything works. Also, `bsd-overlay` is not currently supported.

# Building
`make` and `make DESTDIR=$PWD/DEST` install`
