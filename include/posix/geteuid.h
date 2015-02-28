#ifndef c_posix_geteuid_h_
#define c_posix_geteuid_h_

#include "compat/_Nothrow.h"

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_Nothrow
static
uid_t
geteuid()
{
    return _syscall_Result_ok(uid_t, _syscall_0(SYS_geteuid));
}

#endif
