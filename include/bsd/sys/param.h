#pragma once

#include <sys/param.h>

#ifdef __x86_64__
#define MACHINE "x86_64"
#define MACHINE_ARCH "x86_64"
#elif
#define MACHINE "Unknown"
#define MACHINE_ARCH "Unknown"
#endif

