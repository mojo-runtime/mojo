#ifndef _c__linux__x86_64___sys_waitid_h
#define _c__linux__x86_64___sys_waitid_h

#include "c/linux/x86_64/SYS_waitid.h"
#include "c/linux/x86_64/pid_t.h"
#include "c/linux/x86_64/rusage.h"
#include "c/linux/x86_64/siginfo_t.h"
#include "c/linux/x86_64/_SystemCallResult.h"
#include "c/linux/x86_64/_WaitOptions.h"
#include "c/linux/x86_64/_WaitType.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
_sys_waitid(_WaitType type, pid_t pid, siginfo_t* info, _WaitOptions options, struct rusage* usage)
{
    _SystemCallResult
    result;

    register
    _WaitType
    r1 __asm__ ("rdi") = type;

    register
    pid_t
    r2 __asm__ ("rsi") = pid;

    register
    siginfo_t*
    r3 __asm__ ("rdx") = info;

    register
    _WaitOptions
    r4 __asm__ ("r10") = options;

    register
    struct rusage*
    r5 __asm__ ("r8") = usage;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_waitid), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5)
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
