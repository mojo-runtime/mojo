#pragma once

#if defined(__linux__)
#  include "c/SYS_getppid.h"
#  include "c/pid_t.h"
#  include "__call_always_ok.hxx"

namespace os {

static inline
pid_t
getppid() noexcept
{
    return __call_always_ok<pid_t>(SYS_getppid);
}

}

#else
#  error
#endif
