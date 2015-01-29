#ifndef _c__syscall0_h
#define _c__syscall0_h

#include "c/SystemCallNumber.h"
#include "c/SystemCallResult.h"
#include "c/_NOTHROW.h"

#ifdef __cplusplus
inline namespace c {
#endif

_NOTHROW
static inline
SystemCallResult
syscall0(SystemCallNumber number)
{
    SystemCallResult
    result;

#if defined(__linux__) && defined(__x86_64__)
    asm __volatile__ ("syscall"
                      : "=a" (result)
                      : "0" (number)
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
