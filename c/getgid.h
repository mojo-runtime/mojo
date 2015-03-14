#pragma once

#if defined(__unix__)
#  include "SYS_getgid.h"
#  include "gid_t.h"
#  include "__Result_ok.h"
#  include "__nothrow.h"
#  include "__syscall0.h"

__nothrow
static inline
gid_t
getgid()
{
    return __Result_ok(gid_t, __syscall0(SYS_getgid));
}

#else
#  error
#endif
