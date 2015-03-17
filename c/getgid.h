#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__unix__)

#include "SYS_getgid.h"
#include "gid_t.h"

__attribute__((__nothrow__))
static inline
gid_t
getgid() __noexcept
{
    gid_t
    result;

#if defined(__linux__) && defined(__x86_64__)
    __asm__ ("syscall" : "=a" (result) : "0" (SYS_getgid) : "rcx", "r11");
#else
#  error
#endif

    return result;
}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
