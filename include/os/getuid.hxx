#pragma once

#if defined(__linux__)
#  include "c/SYS_getuid.h"
#  include "c/uid_t.h"
#  include "__call_always_ok.hxx"

namespace os {

static inline
uid_t
getuid() noexcept
{
    return __call_always_ok<uid_t>(SYS_getuid);
}

}

#else
#  error
#endif
