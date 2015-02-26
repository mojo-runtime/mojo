#ifndef linux_getppid_h_
#define linux_getppid_h_

#include "x/nothrow.h"

#include "SYS_getppid.h"
#include "pid_t.h"
#include "_linux_syscall0_cannot_fail.h"

x_nothrow
static
pid_t
getppid()
{
    return _linux_syscall0_cannot_fail(SYS_getppid, pid_t);
}

#endif
