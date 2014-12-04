#ifndef _c__linux__x86_64___sys_open_h
#define _c__linux__x86_64___sys_open_h

#include "c/linux/x86_64/SYS_open.h"
#include "c/linux/x86_64/_OpenFlags.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
 _sys_open(const char* path, _OpenFlags flags)
{
    _SystemCallResult
    result;

    register
    const char*
    r1 __asm__ ("rdi") = path;

    register
    _OpenFlags
    r2 __asm__ ("rsi") = flags;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_open), "r" (r1), "r" (r2)
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
