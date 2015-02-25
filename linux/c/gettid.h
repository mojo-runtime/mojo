#ifndef linux_gettid_h_
#define linux_gettid_h_

#include "compiler/nothrow.h"
#include "compat/_c_static_cast.h"

#include "SYS_gettid.h"
#include "pid_t.h"
#include "_linux_syscall0.h"

compiler_nothrow
static
pid_t
gettid()
{
    return _c_static_cast(pid_t, _linux_syscall0(SYS_gettid));
}

#endif
