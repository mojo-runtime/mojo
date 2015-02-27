#ifndef linux_getgid_h_
#define linux_getgid_h_

#include "attribute/nothrow.h"

#include "SYS_getgid.h"
#include "gid_t.h"
#include "_linux_syscall0_cannot_fail.h"

attribute_nothrow
static
gid_t
getgid()
{
    return _linux_syscall0_cannot_fail(SYS_getgid, gid_t);
}

#endif
