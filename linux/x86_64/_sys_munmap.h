#ifndef _c__linux__x86_64___sys_munmap_h
#define _c__linux__x86_64___sys_munmap_h

#include "c/linux/x86_64/SYS_munmap.h"
#include "c/linux/x86_64/size_t.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
_sys_munmap(void* address, size_t length)
{
    _SystemCallResult
    result;

    register
    void*
    r1 __asm__ ("rdi") = address;

    register
    size_t
    r2 __asm__ ("rsi") = length;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_munmap), "r" (r1), "r" (r2)
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
