#ifndef _c__linux__x86_64__timeval_h
#define _c__linux__x86_64__timeval_h

#include "c/linux/x86_64/suseconds_t.h"
#include "c/linux/x86_64/time_t.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

struct timeval
{
    time_t
    tv_sec;

    suseconds_t
    tv_usec;
};

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
