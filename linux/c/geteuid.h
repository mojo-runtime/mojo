#ifndef linux_geteuid_h_
#define linux_geteuid_h_

#include "compiler/nothrow.h"

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "_linux_syscall0_cannot_fail.h"

compiler_nothrow
static
uid_t
geteuid()
{
    return _linux_syscall0_cannot_fail(SYS_geteuid, uid_t);
}

#endif
