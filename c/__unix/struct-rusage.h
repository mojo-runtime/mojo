#pragma once

#include "struct-timeval.h"

struct rusage
{
    // linux: include/uapi/linux/resource.h
    // freebsd: sys/sys/resource.h

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
};
