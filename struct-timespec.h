#ifndef c_struct_timespec_h_
#define c_struct_timespec_h_

#include "time_t.h"

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

#endif
