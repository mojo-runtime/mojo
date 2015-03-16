#pragma once

#if defined(__linux__)
#  include "compat/__nothrow.h"
#  include "SYS_gettid.h"
#  include "pid_t.h"
#  include "__Result_ok.h"
#  include "__syscall0.h"

__nothrow
static inline
pid_t
gettid()
{
    return __Result_ok(pid_t, __syscall0(SYS_gettid));
}

#else
#  error
#endif
