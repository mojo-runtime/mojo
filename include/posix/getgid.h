#ifndef c_posix_getgid_h_
#define c_posix_getgid_h_

#include "attribute/nothrow.h"

#include "SYS_getgid.h"
#include "gid_t.h"
#include "_c_syscall0.h"
#include "_c_syscall_Result_ok.h"

attribute_nothrow
static
gid_t
getgid()
{
    return _c_syscall_Result_ok(gid_t, _c_syscall0(SYS_getgid));
}

#endif
