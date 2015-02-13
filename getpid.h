#ifndef c_getpid_h_
#define c_getpid_h_

#include "c/pid_t.h"
#include "c/SYS_getpid.h"
#include "c/__c_noexcept.h"

#ifdef __cplusplus
inline namespace c {
#endif

static inline
pid_t
getpid() __c_noexcept
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
