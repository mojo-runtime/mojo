#ifndef c_getppid_h_
#define c_getppid_h_

#include "SYS_getppid.h"
#include "pid_t.h"
#include "_compat/_c_noexcept.h"
#include "_compat/_c_static_cast.h"
#include "abi/_abi_syscall_0.h"

static
pid_t
getppid() _c_noexcept
{
    return _c_static_cast(pid_t, _abi_syscall_0(SYS_getppid));
}

#endif
