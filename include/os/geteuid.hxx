#pragma once

#if defined(__linux__)
#  include "c/SYS_geteuid.h"
#  include "c/uid_t.h"
#  include "__call_always_ok.hxx"

namespace os {

static inline
uid_t
geteuid() noexcept
{
    return __call_always_ok<uid_t>(SYS_geteuid);
}

}

#else
#  error
#endif
