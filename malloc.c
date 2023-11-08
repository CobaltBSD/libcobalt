// Does not do the same thing as OpenBSD's recallocarray(); merely calls reallocarray, ignoring oldnmemb

#include <stdlib.h>

void *recallocarray(void *ptr, size_t oldnmemb, size_t nmemb, size_t size) {
	return reallocarray(ptr, nmemb, size);
}
