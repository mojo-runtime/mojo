#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "SYS_getgid.h"
#  include "gid_t.h"
#  include "abi/__syscall_0_no_error.h"

static inline
gid_t
getgid() __noexcept
{
    return __static_cast(gid_t, __syscall_0_no_error(SYS_getgid));
}

#else
#  error
#endif
