#ifndef linux_getegid_h_
#define linux_getegid_h_

#include "x/nothrow.h"

#include "SYS_getegid.h"
#include "gid_t.h"
#include "_linux_syscall0_cannot_fail.h"

x_nothrow
static
gid_t
getegid()
{
    return _linux_syscall0_cannot_fail(SYS_getegid, gid_t);
}

#endif
