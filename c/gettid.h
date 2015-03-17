#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__linux__)

#include "SYS_gettid.h"
#include "pid_t.h"

__attribute__((__nothrow__))
static inline
pid_t
gettid()
{
    pid_t
    result;

#if defined(__linux__) && defined(__x86_64__)
    __asm__ ("syscall" : "=a" (result) : "0" (SYS_gettid) : "rcx", "r11");
#else
#  error
#endif

    return result;
}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
