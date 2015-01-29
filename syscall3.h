#ifndef _c__syscall3_h
#define _c__syscall3_h

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
         SystemCallArgument a1, SystemCallArgument a2, SystemCallArgument a3)
{
    SystemCallResult result;

#if defined(__linux__) && defined(__x86_64__)
    register SystemCallArgument r1 asm ("rdi") = a1;
    register SystemCallArgument r2 asm ("rsi") = a2;
    register SystemCallArgument r3 asm ("rdx") = a3;

    asm __volatile__ ("syscall"
                      : "=a" (result)
                      : "0" (n), "r" (r1), "r" (r2), "r" (r3)
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
