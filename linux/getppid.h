#ifndef linux_getppid_h_
#define linux_getppid_h_

#include "attribute/nothrow.h"

#include "SYS_getppid.h"
#include "pid_t.h"
#include "_c_syscall0_cannot_fail.h"

attribute_nothrow
static
pid_t
getppid()
{
    return _c_syscall0_cannot_fail(SYS_getppid, pid_t);
}

#endif
