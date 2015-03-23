#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/SYS_getegid.h"
#  include "c/gid_t.h"
#  include "c/__syscall_0_no_error.h"

namespace os {

static inline
gid_t
getegid() noexcept
{
    return __syscall_0_no_error(gid_t, SYS_getegid);
}

}

#else
#  error
#endif
