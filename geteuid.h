#ifndef c_geteuid_h_
#define c_geteuid_h_

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "_internal/_c_noexcept.h"
#include "_internal/_c_static_cast.h"
#include "_internal/_c_syscall0.h"

static
uid_t
geteuid() _c_noexcept
{
    return _c_static_cast(uid_t, _c_syscall0(SYS_geteuid));
}

#endif
