#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/SYS_getegid.h"
#  include "c/gid_t.h"
#  include "__call_always_ok.hxx"

namespace os {

static inline
gid_t
getegid() noexcept
{
    return __call_always_ok<gid_t>(SYS_getegid);
}

}

#else
#  error
#endif
