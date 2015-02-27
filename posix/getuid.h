#ifndef c_posix_getuid_h_
#define c_posix_getuid_h_

#include "attribute/nothrow.h"

#include "SYS_getuid.h"
#include "uid_t.h"
#include "_c_syscall0.h"
#include "_c_syscall_Result_ok.h"

attribute_nothrow
static
uid_t
getuid()
{
    return _c_syscall_Result_ok(uid_t, _c_syscall0(SYS_getuid));
}

#endif
