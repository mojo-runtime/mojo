#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "SYS_getpgid.h"
#  include "pid_t.h"
#  include "__syscall_0_no_error.h"

static inline
pid_t
getpgid() __noexcept
{
    return __static_cast(pid_t, __syscall_0_no_error(SYS_getpgid));
}

#else
#  error
#endif
