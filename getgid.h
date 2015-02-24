#ifndef c_getgid_h_
#define c_getgid_h_

#include "SYS_getgid.h"
#include "gid_t.h"
#include "_internal/_c_noexcept.h"
#include "_internal/_c_static_cast.h"
#include "_internal/_c_syscall0.h"

static
gid_t
getgid() _c_noexcept
{
    return _c_static_cast(gid_t, _c_syscall0(SYS_getgid));
}

#endif
