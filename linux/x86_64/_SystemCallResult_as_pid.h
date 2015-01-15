#ifndef _c__linux__x86_64___SystemCallResult_as_pid_h
#define _c__linux__x86_64___SystemCallResult_as_pid_h

#include "c/linux/x86_64/pid_t.h"
#include "c/linux/x86_64/_SystemCallResult.h"
#include "c/__c_STATIC_CAST.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
pid_t
_SystemCallResult_as_pid(_SystemCallResult result)
{
    return __c_STATIC_CAST(pid_t, result.__word);
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
