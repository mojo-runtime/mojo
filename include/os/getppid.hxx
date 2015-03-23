#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/SYS_getppid.h"
#  include "c/pid_t.h"
#  include "c/__syscall_0_no_error.h"

namespace os {

static inline
pid_t
getppid() noexcept
{
    return __syscall_0_no_error(pid_t, SYS_getppid);
}

}

#else
#  error
#endif
