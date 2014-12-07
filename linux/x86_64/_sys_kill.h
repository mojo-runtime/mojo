#ifndef _c__linux__x86_64___sys_kill_h
#define _c__linux__x86_64___sys_kill_h

#include "c/linux/x86_64/SYS_kill.h"
#include "c/linux/x86_64/pid_t.h"
#include "c/linux/x86_64/_SignalNumber.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
_sys_kill(pid_t pid, _SignalNumber signal)
{
    _SystemCallResult
    result;

    register
    pid_t
    r1 __asm__ ("rdi") = pid;

    register
    _SignalNumber
    r2 __asm__ ("rsi") = signal;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_kill), "r" (r1), "r" (r2)
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
