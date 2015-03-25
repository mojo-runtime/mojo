#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/SYS_getpid.h"
#  include "c/pid_t.h"
#  include "__call_0_no_error.hxx"

namespace os {

static inline
pid_t
getpid() noexcept
{
    return __call_0_no_error<pid_t>(SYS_getpid);
}

}

#else
#  error
#endif
