#ifndef c_posix_geteuid_h_
#define c_posix_geteuid_h_

#include "attribute/nothrow.h"

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "_c_syscall0.h"
#include "_c_syscall_Result_ok.h"

attribute_nothrow
static
uid_t
geteuid()
{
    return _c_syscall_Result_ok(uid_t, _c_syscall0(SYS_geteuid));
}

#endif
