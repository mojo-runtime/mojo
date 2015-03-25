#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "SYS_getegid.h"
#  include "gid_t.h"
#  include "__syscall_0_no_error.h"

static inline
gid_t
getegid() __noexcept
{
    return __static_cast(gid_t, __syscall_0_no_error(SYS_getegid));
}

#else
#  error
#endif
