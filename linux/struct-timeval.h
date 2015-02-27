#ifndef c_linux_struct_timeval_h_
#define c_linux_struct_timeval_h_

#include "time_t.h"
#include "suseconds_t.h"

struct timeval
{
    time_t
    tv_sec;

    suseconds_t
    tv_usec;
};

#endif
