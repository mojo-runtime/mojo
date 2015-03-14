#pragma once

#if defined(__unix__)
#  include "SYS_getppid.h"
#  include "pid_t.h"
#  include "__Result_ok.h"
#  include "__nothrow.h"
#  include "__syscall0.h"

__nothrow
static inline
pid_t
getppid()
{
    return __Result_ok(pid_t, __syscall0(SYS_getppid));
}

#else
#  error
#endif
