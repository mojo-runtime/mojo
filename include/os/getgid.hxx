#pragma once

#if defined(__linux__)
#  include "c/SYS_getgid.h"
#  include "c/gid_t.h"
#  include "__call_always_ok.hxx"

namespace os {

static inline
gid_t
getgid() noexcept
{
    return __call_always_ok<gid_t>(SYS_getgid);
}

}

#else
#  error
#endif
