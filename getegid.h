#ifndef c_getegid_h_
#define c_getegid_h_

#include "SYS_getegid.h"
#include "gid_t.h"
#include "_internal/_c_noexcept.h"
#include "_internal/_c_static_cast.h"
#include "_internal/_c_syscall0.h"

static
gid_t
getegid() _c_noexcept
{
    return _c_static_cast(gid_t, _c_syscall0(SYS_getegid));
}

#endif
