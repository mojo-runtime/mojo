#pragma once

#if defined(__unix__)
#  include "compat/__noexcept.h"
#  include "SYS_getgid.h"
#  include "gid_t.h"
#  include "__Result_ok.h"
#  include "__syscall0.h"

static inline
gid_t
getgid() __noexcept
{
    return __Result_ok(gid_t, __syscall0(SYS_getgid));
}

#else
#  error
#endif
