#pragma once

#if defined(__unix__)
#  include "compat/__nothrow.h"
#  include "SYS_getegid.h"
#  include "gid_t.h"
#  include "__Result_ok.h"
#  include "__syscall0.h"

__nothrow
static inline
gid_t
getegid()
{
    return __Result_ok(gid_t, __syscall0(SYS_getegid));
}

#else
#  error
#endif
