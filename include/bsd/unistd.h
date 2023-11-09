#pragma once

#include <unistd.h>

#include <sys/stat.h>

#define S_ISTXT S_ISVTX

void *setmode(const char *p);

mode_t getmode(const void *bbox, mode_t omode);

#define PLEDGE_PENALTY_KILL_THREAD  0x0000
#define PLEDGE_PENALTY_KILL_PROCESS 0x0001
#define PLEDGE_PENALTY_RETURN_EPERM 0x0002
#define PLEDGE_PENALTY_MASK         0x000f
#define PLEDGE_STDERR_LOGGING       0x0010

extern int __pledge_mode;

int pledge(const char *, const char *);
