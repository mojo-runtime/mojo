#pragma once

//--------------------------------------------------------------------------------------------------

#if defined(__unix__)

#include "SYS_getegid.h"
#include "gid_t.h"

__attribute__((__nothrow__))
static inline
gid_t
getegid()
{
    gid_t
    result;

#if defined(__x86_64__)
#  if defined(__linux__) || defined(__FreeBSD__)
    __asm__ ("syscall" : "=a" (result) : "0" (SYS_getegid) : "rcx", "r11");
#  else
#    error
#  endif
#else
#  error
#endif

    return result;
}

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
