#ifndef c_struct_timeval_h_
#define c_struct_timeval_h_

#include "time_t.h"
#include "suseconds_t.h"

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

#endif
