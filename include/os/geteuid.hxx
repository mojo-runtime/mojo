#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "c/SYS_geteuid.h"
#  include "c/uid_t.h"
#  include "c/__syscall_0_no_error.h"

namespace os {

static inline
uid_t
geteuid() noexcept
{
    return static_cast<uid_t>(__syscall_0_no_error(SYS_geteuid));
}

}

#else
#  error
#endif
