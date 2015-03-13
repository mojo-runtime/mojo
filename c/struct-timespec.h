#ifndef _c_struct_timespec_h_
#define _c_struct_timespec_h_

#if defined(__linux__) || defined(__FreeBSD__)
#  include "time_t.h"

struct timespec
{
    time_t
    tv_sec;

    long
    tv_nsec;
};

#else
#  error
#endif

#endif
