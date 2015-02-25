#ifndef linux_struct_timespec_h_
#define linux_struct_timespec_h_

#include "time_t.h"

struct timespec
{
    time_t
    tv_sec;

    long
    tv_nsec;
};

#endif
