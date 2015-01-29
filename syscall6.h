#ifndef _c__syscall6_h
#define _c__syscall6_h

#include "c/SystemCallArgument.h"
#include "c/SystemCallNumber.h"
#include "c/SystemCallResult.h"
#include "c/_NOTHROW.h"

#ifdef __cplusplus
inline namespace c {
#endif

_NOTHROW
static inline
SystemCallResult
syscall1(SystemCallNumber n,
         SystemCallArgument a1, SystemCallArgument a2, SystemCallArgument a3,
         SystemCallArgument a4, SystemCallArgument a5, SystemCallArgument a6)
{
    SystemCallResult result;

#if defined(__linux__) && defined(__x86_64__)
    register SystemCallArgument r1 asm ("rdi") = a1;
    register SystemCallArgument r2 asm ("rsi") = a2;
    register SystemCallArgument r3 asm ("rdx") = a3;
    register SystemCallArgument r4 asm ("r10") = a4;
    register SystemCallArgument r5 asm ("r8")  = a5;
    register SystemCallArgument r6 asm ("r9")  = a6;

    asm __volatile__ ("syscall"
                      : "=a" (result)
                      : "0" (n), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5), "r" (r6)
                      : "rcx", "r11");
#else
#  error
#endif

    return result;
}

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
