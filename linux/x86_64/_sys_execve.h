#ifndef _c__linux__x86_64___sys_execve_h
#define _c__linux__x86_64___sys_execve_h

#include "c/linux/x86_64/SYS_execve.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
_sys_execve(const char* path, const char* const argv[], const char* const envp[])
{
    _SystemCallResult
    result;

    register
    const char*
    r1 __asm__ ("rdi") = path;

    register
    const char* const*
    r2 __asm__ ("rsi") = argv;

    register
    const char* const*
    r3 __asm__ ("rdx") = envp;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_execve), "r" (r1), "r" (r2), "r" (r3)
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
