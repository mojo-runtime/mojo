#pragma once

#if defined(__unix__)
#  include "compat/__nothrow.h"
#  include "SYS_getpid.h"
#  include "pid_t.h"
#  include "__Result_ok.h"
#  include "__syscall0.h"

__nothrow
static inline
pid_t
getpid()
{
    return __Result_ok(pid_t, __syscall0(SYS_getpid));
}

#else
#  error
#endif
