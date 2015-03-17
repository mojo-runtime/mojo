#pragma once

#if defined(__unix__)
#  include "compat/__noexcept.h"
#  include "SYS_getuid.h"
#  include "uid_t.h"
#  include "__Result_ok.h"
#  include "__syscall0.h"

static inline
uid_t
getuid() __noexcept
{
    return __Result_ok(uid_t, __syscall0(SYS_getpid));
}

#else
#  error
#endif
