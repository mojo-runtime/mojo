#ifndef linux_getgid_h_
#define linux_getgid_h_

#include "x/nothrow.h"

#include "SYS_getgid.h"
#include "gid_t.h"
#include "_linux_syscall0_cannot_fail.h"

x_nothrow
static
gid_t
getgid()
{
    return _linux_syscall0_cannot_fail(SYS_getgid, gid_t);
}

#endif
