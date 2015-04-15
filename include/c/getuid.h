#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "SYS_getuid.h"
#  include "uid_t.h"
#  include "abi/__syscall_0_no_error.h"

static inline
uid_t
getuid() __noexcept
{
    return __static_cast(uid_t, __syscall_0_no_error(SYS_getuid));
}

#else
#  error
#endif
