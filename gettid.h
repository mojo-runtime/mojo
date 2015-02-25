#ifndef c_gettid_h_
#define c_gettid_h_

#include "SYS_gettid.h"
#include "pid_t.h"
#include "_compat/_c_noexcept.h"
#include "_compat/_c_static_cast.h"
#include "abi/_abi_syscall_0.h"

static
pid_t
gettid() _c_noexcept
{
    return _c_static_cast(pid_t, _abi_syscall_0(SYS_gettid));
}

#endif
