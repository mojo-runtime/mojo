#ifndef _c__linux__x86_64___exit_h
#define _c__linux__x86_64___exit_h

#include "c/linux/x86_64/SYS_exit.h"
#include "c/linux/x86_64/_ExitStatus.h"
#include "c/__builtin_unreachable?.h"
#include "c/__c_NORETURN.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

__c_NORETURN
static
void
_exit(_ExitStatus status)
{
    register
    _ExitStatus
    r1 __asm__ ("rdi") = status;

    __asm__ volatile (
        "syscall"
        : /* outputs  */
        : /* inputs   */ "ra" (SYS_exit), "r" (r1)
        : /* clobbers */ "rcx", "r11"
    );

    __builtin_unreachable();
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
