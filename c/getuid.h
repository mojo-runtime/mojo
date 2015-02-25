#ifndef c_getuid_h_
#define c_getuid_h_

#include "SYS_getuid.h"
#include "uid_t.h"
#include "_compat/_c_noexcept.h"
#include "_compat/_c_static_cast.h"
#include "abi/_abi_syscall_0.h"

static
uid_t
getuid() _c_noexcept
{
    return _c_static_cast(uid_t, _abi_syscall_0(SYS_getuid));
}

#endif
