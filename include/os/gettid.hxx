#pragma once

#if defined(__linux__)
#  include "c/SYS_gettid.h"
#  include "c/pid_t.h"
#  include "c/__syscall_0_no_error.h"

namespace os {

static inline
pid_t
gettid() noexcept
{
    return __syscall_0_no_error(pid_t, SYS_gettid);
}

}

#else
#  error
#endif
