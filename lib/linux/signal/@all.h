#pragma once

//--------------------------------------------------------------------------------------------------
// Constants

// BUS_ADRALN
// BUS_ADRERR
// BUS_OBJERR
#include "CLD_CONTINUED.h"
#include "CLD_DUMPED.h"
#include "CLD_EXITED.h"
#include "CLD_KILLED.h"
#include "CLD_STOPPED.h"
#include "CLD_TRAPPED.h"
// ILL_BADSTK
// ILL_COPROC
// ILL_ILLADR
// ILL_ILLOPC
// ILL_ILLOPN
// ILL_ILLTRP
// ILL_PRVOPC
// ILL_PRVREG
// FPE_INTDIV
// FPE_INTOVF
// FPE_FLTDIV
// FPE_FLTINV
// FPE_FLTOVF
// FPE_FLTRES
// FPE_FLTSUB
// FPE_FLTUND
// MINSIGSTKSZ [XSI]
// SEGV_ACCERR
// SEGV_MAPERR
// POLL_ERR
// POLL_HUP
// POLL_IN
// POLL_MSG
// POLL_OUT
// POLL_PRI
// SA_NOCLDSTOP [XSI]
// SA_NOCLDWAIT [XSI]
// SA_NODEFER [XSI]
// SA_ONSTACK [XSI]
// SA_RESETHAND [XSI]
// SA_RESTART [XSI]
// SA_SIGINFO [XSI]
// SS_DISABLE [XSI]
// SS_ONSTACK [XSI]
// SI_ASYNCIO
// SI_MESGQ
// SI_QUEUE
// SI_TIMER
// SI_USER
// SIG_BLOCK [CX]
#include "SIG_DFL.h"
#include "SIG_ERR.h"
// SIG_HOLD [CX]
#include "SIG_IGN.h"
// SIG_SETMASK [CX]
// SIG_UNBLOCK [CX]
#include "SIGABRT.h"
#include "SIGALRM.h" // [CX]
#include "SIGCHLD.h" // [CX]
// SIGCONT [CX]
// SIGEV_NONE
// SIGEV_SIGNAL
// SIGEV_THREAD
#include "SIGFPE.h"
#include "SIGHUP.h" // [CX]
#include "SIGILL.h"
#include "SIGINT.h"
#include "SIGKILL.h" // [CX]
#include "SIGPIPE.h" // [CX]
#include "SIGQUIT.h" // [CX]
// SIGRTMAX
// SIGRTMIN
#include "SIGSEGV.h"
// SIGSTKSZ [XSI]
// SIGSTOP [CX]
// SIGSYS [CX]
#include "SIGTERM.h"
#include "SIGTRAP.h" // [CX]
// SIGTSTP [CX]
// SIGTTIN [CX]
// SIGTTOU [CX]
// SIGURG [CX]
// SIGUSR1 [CX]
// SIGUSR2 [CX]
// SIGVTALRM [XSI]
// SIGXCPU [CX]
// SIGXFSZ [CX]
// TRAP_BRKPT
// TRAP_TRACE

//--------------------------------------------------------------------------------------------------
// Types

// mcontext_t [XSI]
#include "../types/pid_t.h" // [CX]
// sig_atomic_t
// siginfo_t [CX]
// sigset_t [CX]
// sigstack [XSI]
// stack_t [XSI]
// struct sigevent [rts]
#include "union-sigval.h" // [CX]
// ucontext_t [XSI]

//--------------------------------------------------------------------------------------------------

// bsd_signal [XSI]
// kill [CX]
// killpg [XSI]
// pthread_kill [THR]
// pthread_sigmask [THR]
// raise
// sigaction [CX]
// sigaddset [CX]
// sigaltstack [XSI]
// sigdelset [CX]
// sigemptyset [CX]
// sigfillset [CX]
// sighold [XSI]
// sigignore [XSI]
// siginterrupt [XSI]
// sigismember [CX]
// signal
// sigpause [XSI]
// sigpending [CX]
// sigprocmask [CX]
// sigqueue [RTS]
// sigrelse [XSI]
// sigset [XSI]
// sigsuspend [CX]
// sigtimedwait [RTS]
// sigwait [CX]
// sigwaitinfo [RTS]
