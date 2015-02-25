#ifndef linux_getpid_h_
#define linux_getpid_h_

#include "compiler/nothrow.h"
#include "compat/_c_static_cast.h"

#include "SYS_getpid.h"
#include "pid_t.h"
#include "_linux_syscall0.h"

compiler_nothrow
static
pid_t
getpid()
{
    return _c_static_cast(pid_t, _linux_syscall0(SYS_getpid));
}

#endif
