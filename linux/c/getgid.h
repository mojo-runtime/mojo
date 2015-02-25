#ifndef linux_getgid_h_
#define linux_getgid_h_

#include "compat/_c_noexcept.h"
#include "compat/_c_static_cast.h"

#include "SYS_getgid.h"
#include "gid_t.h"
#include "_linux_syscall0.h"

static
gid_t
getgid() _c_noexcept
{
    return _c_static_cast(gid_t, _linux_syscall0(SYS_getgid));
}

#endif
