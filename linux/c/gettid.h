#ifndef linux_gettid_h_
#define linux_gettid_h_

#include "x/nothrow.h"

#include "SYS_gettid.h"
#include "pid_t.h"
#include "_linux_syscall0_cannot_fail.h"

x_nothrow
static
pid_t
gettid()
{
    return _linux_syscall0_cannot_fail(SYS_gettid, pid_t);
}

#endif
