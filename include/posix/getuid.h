#ifndef c_posix_getuid_h_
#define c_posix_getuid_h_

#include "compat/_Nothrow.h"

#include "SYS_getuid.h"
#include "uid_t.h"
#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_Nothrow
static
uid_t
getuid()
{
    return _syscall_Result_ok(uid_t, _syscall_0(SYS_getuid));
}

#endif
