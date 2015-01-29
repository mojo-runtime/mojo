#ifndef _c__linux__x86_64___exit_h
#define _c__linux__x86_64___exit_h

#include "c/SYS_exit.h"
#include "c/alias/ExitStatus.h"
#include "c/_NORETURN.h"
#include "c/__builtin_unreachable.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

_NORETURN
static
void
_exit(ExitStatus status)
{
    register
    ExitStatus
    r1 __asm__ ("rdi") = status;

    __asm__ volatile (
        "syscall"
        : /* outputs  */
        : /* inputs   */ "ra" (SYS_exit), "r" (r1)
    );

    __builtin_unreachable();
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
