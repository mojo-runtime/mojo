#pragma once

#if defined(__unix__)
#  include "compat/__noexcept.h"
#  include "SYS_getppid.h"
#  include "pid_t.h"
#  include "__Result_ok.h"
#  include "__syscall0.h"

static inline
pid_t
getppid() __noexcept
{
    return __Result_ok(pid_t, __syscall0(SYS_getppid));
}

#else
#  error
#endif
