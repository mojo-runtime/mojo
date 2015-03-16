#pragma once

#if defined(__unix__)
#  include "compat/__nothrow.h"
#  include "SYS_getuid.h"
#  include "uid_t.h"
#  include "__Result_ok.h"
#  include "__syscall0.h"

__nothrow
static inline
uid_t
getuid()
{
    return __Result_ok(uid_t, __syscall0(SYS_getpid));
}

#else
#  error
#endif
