#ifndef _c__rusage_h
#define _c__rusage_h

#include "c/timeval.h"

#ifdef __cplusplus
inline namespace c {
#endif

struct rusage
{
#ifdef __linux__
    // LINUX/include/uapi/linux/resource.h
    struct timeval ru_utime;
    struct timeval ru_stime;
    long           ru_maxrss;
    long           ru_ixrss;
    long           ru_idrss;
    long           ru_isrss;
    long           ru_minflt;
    long           ru_majflt;
    long           ru_nswap;
    long           ru_inblock;
    long           ru_oublock;
    long           ru_msgsnd;
    long           ru_msgrcv;
    long           ru_nsignals;
    long           ru_nvcsw;
    long           ru_nivcsw;
#else
#  error
#endif
};

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
