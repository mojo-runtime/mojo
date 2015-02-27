#ifndef c_linux_getuid_h_
#define c_linux_getuid_h_

#include "attribute/nothrow.h"

#include "SYS_getuid.h"
#include "uid_t.h"
#include "_c_syscall0_cannot_fail.h"

attribute_nothrow
static
uid_t
getuid()
{
    return _c_syscall0_cannot_fail(SYS_getuid, uid_t);
}

#endif
