#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__unix__)

#include "SYS_exit.h"

__attribute__((__noreturn__, __nothrow__))
static inline
void
_exit(int status)
{
#if defined(__linux__) && defined(__x86_64__)
    __asm__ __volatile__ ("syscall" :: "a" (SYS_exit), "D" (status));
#else
#  error
#endif

    __builtin_unreachable();
}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
