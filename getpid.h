#ifndef c_getpid_h_
#define c_getpid_h_

#include "extension/x_noexcept.h"

#include "pid_t.h"
#include "SYS_getpid.h"

static
pid_t
getpid() x_noexcept
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

#endif
