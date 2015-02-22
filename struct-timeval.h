#ifndef c_struct_timeval_h_
#define c_struct_timeval_h_

#include "c/time_t.h"
#include "c/suseconds_t.h"

_c_namespace

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

_c_namespace_end

#endif
