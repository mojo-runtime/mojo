#ifndef linux_geteuid_h_
#define linux_geteuid_h_

#include "compiler/nothrow.h"
#include "compat/_c_static_cast.h"

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "_linux_syscall0.h"

compiler_nothrow
static
uid_t
geteuid()
{
    return _c_static_cast(uid_t, _linux_syscall0(SYS_geteuid));
}

#endif
