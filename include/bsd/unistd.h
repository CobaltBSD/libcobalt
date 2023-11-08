#pragma once

#include <unistd.h>

#include <sys/stat.h>

#define S_ISTXT S_ISVTX

void *setmode(const char *p);

mode_t getmode(const void *bbox, mode_t omode);
