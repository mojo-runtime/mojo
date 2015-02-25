#ifndef linux_getppid_h_
#define linux_getppid_h_

#include "c/_c_syscall0.h"
#include "compat/_c_noexcept.h"
#include "compat/_c_static_cast.h"

#include "SYS_getppid.h"
#include "pid_t.h"

static
pid_t
getppid() _c_noexcept
{
    return _c_static_cast(pid_t, _c_syscall0(SYS_getppid));
}

#endif
