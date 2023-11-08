#pragma once

#include <stdlib.h>

long long strtonum(const char *numstr, long long minval, long long maxval, const char **errstrp);

// Get name of invoking program
const char *getprogname(void);

char *getbsize(int *headerlenp, long *blocksizep);

void *recallocarray(void *ptr, size_t oldnmemb, size_t nmemb, size_t size);
