#ifndef linux_getuid_h_
#define linux_getuid_h_

#include "compiler/nothrow.h"
#include "compat/_c_static_cast.h"

#include "SYS_getuid.h"
#include "uid_t.h"
#include "_linux_syscall0.h"

compiler_nothrow
static
uid_t
getuid()
{
    return _c_static_cast(uid_t, _linux_syscall0(SYS_getuid));
}

#endif
