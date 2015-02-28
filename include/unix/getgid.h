#ifndef unix_getgid_h_
#define unix_getgid_h_

#include "compat/_Nothrow.h"

#include "SYS_getgid.h"
#include "gid_t.h"
#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_Nothrow
static
gid_t
getgid()
{
    return _syscall_Result_ok(gid_t, _syscall_0(SYS_getgid));
}

#endif
