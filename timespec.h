#ifndef c_timespec_h_
#define c_timespec_h_

#include "c/time_t.h"

__c_namespace_open

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

__c_namespace_close

#endif
