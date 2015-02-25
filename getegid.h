#ifndef c_getegid_h_
#define c_getegid_h_

#include "SYS_getegid.h"
#include "gid_t.h"
#include "_compat/_c_noexcept.h"
#include "_compat/_c_static_cast.h"
#include "abi/_abi_syscall_0.h"

static
gid_t
getegid() _c_noexcept
{
    return _c_static_cast(gid_t, _abi_syscall_0(SYS_getegid));
}

#endif
