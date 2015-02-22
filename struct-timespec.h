#ifndef c_struct_timespec_h_
#define c_struct_timespec_h_

#include "c/time_t.h"

_c_namespace

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

_c_namespace_end

#endif
