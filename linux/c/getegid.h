#ifndef linux_getegid_h_
#define linux_getegid_h_

#include "compiler/nothrow.h"
#include "compat/_c_static_cast.h"

#include "SYS_getegid.h"
#include "gid_t.h"
#include "_linux_syscall0.h"

compiler_nothrow
static
gid_t
getegid()
{
    return _c_static_cast(gid_t, _linux_syscall0(SYS_getegid));
}

#endif
