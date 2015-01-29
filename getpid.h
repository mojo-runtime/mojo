#ifndef _c__getpid_h
#define _c__getpid_h

#include "c/SYS_getpid.h"
#include "c/pid_t.h"
#include "c/_NOTHROW.h"

#ifdef __cplusplus
inline namespace c {
#endif

_NOTHROW
static
pid_t
getpid()
{
    pid_t result;

#if defined(__linux__) && defined(__x86_64__)
    __asm__("syscall" // NOT volatile
            : "=a" (result)
            : "0" (SYS_getpid)
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
