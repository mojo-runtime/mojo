#ifndef _c___exit_h
#define _c___exit_h

#include "c/ExitStatus.h"
#include "c/SYS_exit.h"
#include "c/_NORETURN.h"
#include "c/_NOTHROW.h"
#include "c/__builtin_unreachable.h"

#ifdef __cplusplus
inline namespace c {
#endif

_NORETURN
_NOTHROW
static
void
_exit(ExitStatus status)
{
#if defined(__linux__) && defined(__x86_64__)
    register ExitStatus r1 __asm__ ("rdi") = status;

    __asm__ __volatile__ ("syscall"
                          :
                          : "ra" (SYS_exit), "r" (r1));
#else
#  error
#endif
    __builtin_unreachable();
}

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
