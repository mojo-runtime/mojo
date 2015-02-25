#ifndef linux_getppid_h_
#define linux_getppid_h_

#include "compiler/nothrow.h"
#include "compat/_c_static_cast.h"

#include "SYS_getppid.h"
#include "pid_t.h"
#include "_linux_syscall0.h"

compiler_nothrow
static
pid_t
getppid()
{
    return _c_static_cast(pid_t, _linux_syscall0(SYS_getppid));
}

#endif
