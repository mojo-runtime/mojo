#ifndef _c__linux__x86_64___sys_close_h
#define _c__linux__x86_64___sys_close_h

#include "c/linux/x86_64/SYS_close.h"
#include "c/linux/x86_64/_FileDescriptor.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
 _sys_close(_FileDescriptor fd)
{
    _SystemCallResult
    result;

    register
    _FileDescriptor
    r1 __asm__ ("rdi") = fd;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_close), "r" (r1)
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
