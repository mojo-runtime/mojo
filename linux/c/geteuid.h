#ifndef linux_geteuid_h_
#define linux_geteuid_h_

#include "compat/_c_noexcept.h"
#include "compat/_c_static_cast.h"

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "_linux_syscall0.h"

static
uid_t
geteuid() _c_noexcept
{
    return _c_static_cast(uid_t, _linux_syscall0(SYS_geteuid));
}

#endif
