#ifndef c_getuid_h_
#define c_getuid_h_

#include "SYS_getuid.h"
#include "uid_t.h"
#include "_internal/_c_noexcept.h"
#include "_internal/_c_static_cast.h"
#include "_internal/_c_syscall0.h"

static
uid_t
getuid() _c_noexcept
{
    return _c_static_cast(uid_t, _c_syscall0(SYS_getuid));
}

#endif
