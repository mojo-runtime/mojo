#ifndef linux_getpid_h_
#define linux_getpid_h_

#include "attribute/nothrow.h"

#include "SYS_getpid.h"
#include "pid_t.h"
#include "_c_syscall0_cannot_fail.h"

attribute_nothrow
static
pid_t
getpid()
{
    return _c_syscall0_cannot_fail(SYS_getpid, pid_t);
}

#endif
