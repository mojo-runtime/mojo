#ifndef c_posix_getegid_h_
#define c_posix_getegid_h_

#include "attribute/nothrow.h"

#include "SYS_getegid.h"
#include "gid_t.h"
#include "_c_syscall0.h"
#include "_c_syscall_Result_ok.h"

attribute_nothrow
static
gid_t
getegid()
{
    return _c_syscall_Result_ok(gid_t, _c_syscall0(SYS_getegid));
}

#endif
