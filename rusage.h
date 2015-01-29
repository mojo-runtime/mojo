#ifndef _c__rusage_h
#define _c__rusage_h

#include "c/timeval.h"
#include "c/_KernelLong.h"

#ifdef __cplusplus
inline namespace c {
#endif

struct rusage
{
#ifdef __linux__
    // LINUX/include/uapi/linux/resource.h
    struct timeval ru_utime;
    struct timeval ru_stime;
    _KernelLong    ru_maxrss;
    _KernelLong    ru_ixrss;
    _KernelLong    ru_idrss;
    _KernelLong    ru_isrss;
    _KernelLong    ru_minflt;
    _KernelLong    ru_majflt;
    _KernelLong    ru_nswap;
    _KernelLong    ru_inblock;
    _KernelLong    ru_oublock;
    _KernelLong    ru_msgsnd;
    _KernelLong    ru_msgrcv;
    _KernelLong    ru_nsignals;
    _KernelLong    ru_nvcsw;
    _KernelLong    ru_nivcsw;
#else
#  error
#endif
};

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
