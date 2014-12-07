#ifndef _c__linux__x86_64__rusage_h
#define _c__linux__x86_64__rusage_h

#include "c/int64_t.h"
#include "c/linux/x86_64/timeval.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

struct rusage
{
    // See: LINUX/include/uapi/linux/resource.h

    struct timeval
    ru_utime;

    struct timeval
    ru_stime;

    int64_t
    ru_maxrss;

    int64_t
    ru_ixrss;

    int64_t
    ru_idrss;

    int64_t
    ru_isrss;

    int64_t
    ru_minflt;

    int64_t
    ru_majflt;

    int64_t
    ru_nswap;

    int64_t
    ru_inblock;

    int64_t
    ru_oublock;

    int64_t
    ru_msgsnd;

    int64_t
    ru_msgrcv;

    int64_t
    ru_nsignals;

    int64_t
    ru_nvcsw;

    int64_t
    ru_nivcsw;
};

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
