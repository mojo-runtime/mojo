#ifndef c_getgid_h_
#define c_getgid_h_

#include "SYS_getgid.h"
#include "gid_t.h"
#include "_compat/_c_noexcept.h"
#include "_compat/_c_static_cast.h"
#include "abi/_abi_syscall_0.h"

static
gid_t
getgid() _c_noexcept
{
    return _c_static_cast(gid_t, _abi_syscall_0(SYS_getgid));
}

#endif
