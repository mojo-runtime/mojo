#pragma once

#if defined(__linux__)
#  include "c/SYS_gettid.h"
#  include "c/pid_t.h"
#  include "c/__syscall_0_no_error.h"

namespace system {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(__syscall_0_no_error(SYS_gettid));
}

}

#else
#  error
#endif
