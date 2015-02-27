#ifndef c_linux_getegid_h_
#define c_linux_getegid_h_

#include "attribute/nothrow.h"

#include "SYS_getegid.h"
#include "gid_t.h"
#include "_c_syscall0_cannot_fail.h"

attribute_nothrow
static
gid_t
getegid()
{
    return _c_syscall0_cannot_fail(SYS_getegid, gid_t);
}

#endif
