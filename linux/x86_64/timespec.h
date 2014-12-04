#ifndef _c__linux__x86_64__timespec_h
#define _c__linux__x86_64__timespec_h

#include "c/linux/x86_64/time_t.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

struct timespec
{
    time_t
    tv_sec;

    int64_t // long
    tv_nsec;
};

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
