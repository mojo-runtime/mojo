#ifndef linux_getuid_h_
#define linux_getuid_h_

#include "compiler/nothrow.h"

#include "SYS_getuid.h"
#include "uid_t.h"
#include "_linux_syscall0_cannot_fail.h"

compiler_nothrow
static
uid_t
getuid()
{
    return _linux_syscall0_cannot_fail(SYS_getuid, uid_t);
}

#endif
