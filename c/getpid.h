#ifndef c_getpid_h_
#define c_getpid_h_

#include "SYS_getpid.h"
#include "pid_t.h"
#include "_compat/_c_noexcept.h"
#include "_compat/_c_static_cast.h"
#include "abi/_abi_syscall_0.h"

static
pid_t
getpid() _c_noexcept
{
    return _c_static_cast(pid_t, _abi_syscall_0(SYS_getpid));
}

#endif
