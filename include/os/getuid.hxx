#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/SYS_getuid.h"
#  include "c/uid_t.h"
#  include "c/__syscall_0_no_error.h"

namespace os {

static inline
uid_t
getuid() noexcept
{
    return __syscall_0_no_error(uid_t, SYS_getuid);
}

}

#else
#  error
#endif
