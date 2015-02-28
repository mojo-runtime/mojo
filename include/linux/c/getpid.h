#ifndef linux_getpid_h_
#define linux_getpid_h_

#include "compiler/nothrow.h"

#include "SYS_getpid.h"
#include "pid_t.h"
#include "_linux_syscall0_cannot_fail.h"

compiler_nothrow
static
pid_t
getpid()
{
    return _linux_syscall0_cannot_fail(SYS_getpid, pid_t);
}

#endif
