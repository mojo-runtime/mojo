#ifndef c_timeval_h_
#define c_timeval_h_

#include "c/time_t.h"
#include "c/suseconds_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

struct timeval
{
#ifdef __linux__
    time_t
    tv_sec;

    suseconds_t
    tv_usec;
#else
#  error
#endif
};

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
