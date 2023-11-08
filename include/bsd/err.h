#pragma once

#include <err.h>

#include <stdarg.h>

void warnc(int code, const char *format, ...);

void vwarnc(int code, const char *fmt, va_list ap);

void verrc(int eval, int code, const char *fmt, va_list ap);

void errc(int eval, int code, const char *fmt, ...);

