#ifndef linux_getegid_h_
#define linux_getegid_h_

#include "c/_c_syscall0.h"
#include "compat/_c_noexcept.h"
#include "compat/_c_static_cast.h"

#include "SYS_getegid.h"
#include "gid_t.h"

static
gid_t
getegid() _c_noexcept
{
    return _c_static_cast(gid_t, _c_syscall0(SYS_getegid));
}

#endif
