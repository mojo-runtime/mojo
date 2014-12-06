#ifndef _c__linux__x86_64___SystemCallResult_as_fd_h
#define _c__linux__x86_64___SystemCallResult_as_fd_h

#include "c/linux/x86_64/_FileDescriptor.h"
#include "c/linux/x86_64/_SystemCallResult.h"
#include "c/__internal/__c_STATIC_CAST.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_FileDescriptor
_SystemCallResult_as_fd(_SystemCallResult result)
{
    return __c_STATIC_CAST(_FileDescriptor, result.__word);
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
