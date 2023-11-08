#pragma once

#include <signal.h>

#ifndef NSIG
#define NSIG 32
#endif

static const char *const sys_signame[NSIG] = {
	"Signal 0",
	"HUP",		/* SIGHUP */
	"INT",		/* SIGINT */
	"QUIT",		/* SIGQUIT */
	"ILL",		/* SIGILL */
	"TRAP",		/* SIGTRAP */
	"ABRT",		/* SIGABRT */
	"EMT",		/* SIGEMT */
	"FPE",		/* SIGFPE */
	"KILL",		/* SIGKILL */
	"BUS",		/* SIGBUS */
	"SEGV",		/* SIGSEGV */
	"SYS",		/* SIGSYS */
	"PIPE",		/* SIGPIPE */
	"ALRM",		/* SIGALRM */
	"TERM",		/* SIGTERM */
	"URG",		/* SIGURG */
	"STOP",		/* SIGSTOP */
	"TSTP",		/* SIGTSTP */
	"CONT",		/* SIGCONT */
	"CHLD",		/* SIGCHLD */
	"TTIN",		/* SIGTTIN */
	"TTOU",		/* SIGTTOU */
	"IO",		/* SIGIO */
	"XCPU",		/* SIGXCPU */
	"XFSZ",		/* SIGXFSZ */
	"VTALRM",	/* SIGVTALRM */
	"PROF",		/* SIGPROF */
	"WINCH",	/* SIGWINCH */
	"INFO",		/* SIGINFO */
	"USR1",		/* SIGUSR1 */
	"USR2",		/* SIGUSR2 */
	"THR",		/* SIGTHR */
};
