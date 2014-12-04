#ifndef _c__linux__x86_64___sys_clock_gettime_h
#define _c__linux__x86_64___sys_clock_gettime_h

#include "c/linux/x86_64/SYS_clock_gettime.h"
#include "c/linux/x86_64/clockid_t.h"
#include "c/linux/x86_64/timespec.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
_sys_clock_gettime(clockid_t id, struct timespec* buffer)
{
    _SystemCallResult
    result;

    register
    clockid_t
    r1 __asm__ ("rdi") = id;

    register
    struct timespec*
    r2 __asm__ ("rsi") = buffer;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_clock_gettime), "r" (r1), "r" (r2)
        : /* clobbers */ "rcx", "r11"
    );

    return result;
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
