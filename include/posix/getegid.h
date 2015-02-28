#ifndef c_posix_getegid_h_
#define c_posix_getegid_h_

#include "compat/_Nothrow.h"

#include "SYS_getegid.h"
#include "gid_t.h"
#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_Nothrow
static
gid_t
getegid()
{
    return _syscall_Result_ok(gid_t, _syscall_0(SYS_getegid));
}

#endif
