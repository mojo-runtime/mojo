#ifndef _c__linux__x86_64__getpid_h
#define _c__linux__x86_64__getpid_h

#include "c/linux/x86_64/SYS_getpid.h"
#include "c/linux/x86_64/pid_t.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
pid_t
getpid()
{
    pid_t
    result;

    __asm__ ( // NOT volatile
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_getpid)
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
