#pragma once

#if defined(__linux__)
#  include "compat/__noexcept.h"
#  include "SYS_gettid.h"
#  include "pid_t.h"
#  include "__Result_ok.h"
#  include "__syscall0.h"

static inline
pid_t
gettid() __noexcept
{
    return __Result_ok(pid_t, __syscall0(SYS_gettid));
}

#else
#  error
#endif
