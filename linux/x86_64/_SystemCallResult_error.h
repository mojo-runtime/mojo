#ifndef _c__linux__x86_64___SystemCallResult_error_h
#define _c__linux__x86_64___SystemCallResult_error_h

#include "c/linux/x86_64/_ErrorNumber.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_ErrorNumber
_SystemCallResult_error(_SystemCallResult result)
{
    return __c_STATIC_CAST(_ErrorNumber, -result.__word);
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
