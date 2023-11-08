#ifndef PLEDGE_LIBC_CALLS_PLEDGE_INTERNAL_H_
#define PLEDGE_LIBC_CALLS_PLEDGE_INTERNAL_H_

#include "pledge.h"
#include "promises.h"
#include <stdint.h>
#include <stddef.h>

#define ROUNDUP(X, K) (((X) + (K)-1) & -(K))
#define ARRAYLEN(A) \
  ((sizeof(A) / sizeof(*(A))) / ((unsigned)!(sizeof(A) % sizeof(*(A)))))

#ifndef __STRICT_ANSI__
#define LIKELY(x)   __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#else
#define LIKELY(x)
#define UNLIKELY(x)
#endif

struct Pledges {
  const char *name;
  const uint16_t *syscalls;
  const size_t len;
};

extern const struct Pledges kPledge[PROMISE_LEN_];

int sys_pledge_linux(unsigned long, int);
int ParsePromises(const char *, unsigned long *);

#endif
