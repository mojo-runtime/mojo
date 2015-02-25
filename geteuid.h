#ifndef c_geteuid_h_
#define c_geteuid_h_

#include "abi/_abi_syscall_0.h"

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "_compat/_c_noexcept.h"
#include "_compat/_c_static_cast.h"

static
uid_t
geteuid() _c_noexcept
{
    return _c_static_cast(uid_t, _abi_syscall_0(SYS_geteuid));
}

#endif
