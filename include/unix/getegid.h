#ifndef unix_getegid_h_
#define unix_getegid_h_

#include "c/SYS_getegid.h"
#include "c/gid_t.h"
#include "c/_c_nothrow.h"

#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_c_nothrow
static
gid_t
getegid()
{
    return _syscall_Result_ok(gid_t, _syscall_0(SYS_getegid));
}

#endif
