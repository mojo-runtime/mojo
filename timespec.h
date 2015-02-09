#ifndef c_timespec_h_
#define c_timespec_h_

#include "c/time_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

struct timespec
{
#ifdef __linux__
    time_t
    tv_sec;

    long
    tv_nsec;
#else
#  error
#endif
};

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
