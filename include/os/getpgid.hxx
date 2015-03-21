#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/SYS_getpgid.h"
#  include "c/pid_t.h"
#  include "__call_always_ok.hxx"

namespace os {

static inline
pid_t
getpgid() noexcept
{
    return __call_always_ok<pid_t>(SYS_getpgid);
}

}

#else
#  error
#endif
