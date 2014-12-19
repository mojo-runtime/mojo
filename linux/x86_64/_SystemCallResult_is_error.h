#ifndef _c__linux__x86_64___SystemCallResult_is_error_h
#define _c__linux__x86_64___SystemCallResult_is_error_h

#include "c/bool.h"
#include "c/linux/x86_64/_SystemCallResult.h"
#include "c/__internal/__c_STATIC_CAST.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
bool
_SystemCallResult_is_error(_SystemCallResult result)
{
    return result.__word > __c_STATIC_CAST(uint64_t, -4096);
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
