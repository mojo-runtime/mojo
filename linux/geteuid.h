#ifndef linux_geteuid_h_
#define linux_geteuid_h_

#include "attribute/nothrow.h"

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "_c_syscall0_cannot_fail.h"

attribute_nothrow
static
uid_t
geteuid()
{
    return _c_syscall0_cannot_fail(SYS_geteuid, uid_t);
}

#endif
