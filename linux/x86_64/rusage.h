#ifndef _c__linux__x86_64__rusage_h
#define _c__linux__x86_64__rusage_h

#include "c/linux/x86_64/timeval.h"
#include "c/linux/x86_64/_Long.h"

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

    _Long
    ru_maxrss;

    _Long
    ru_ixrss;

    _Long
    ru_idrss;

    _Long
    ru_isrss;

    _Long
    ru_minflt;

    _Long
    ru_majflt;

    _Long
    ru_nswap;

    _Long
    ru_inblock;

    _Long
    ru_oublock;

    _Long
    ru_msgsnd;

    _Long
    ru_msgrcv;

    _Long
    ru_nsignals;

    _Long
    ru_nvcsw;

    _Long
    ru_nivcsw;
};

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
