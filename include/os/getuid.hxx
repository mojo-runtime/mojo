#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/SYS_getuid.h"
#  include "c/uid_t.h"
#  include "__call_0_no_error.hxx"

namespace os {

static inline
uid_t
getuid() noexcept
{
    return __call_0_no_error<uid_t>(SYS_getuid);
}

}

#else
#  error
#endif
