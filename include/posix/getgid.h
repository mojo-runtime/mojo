#ifndef c_posix_getgid_h_
#define c_posix_getgid_h_

#include "compatibility/NOTHROW.h"

#include "SYS_getgid.h"
#include "gid_t.h"
#include "_system_call_0.h"
#include "_system_Result_ok.h"

NOTHROW
static
gid_t
getgid()
{
    return _system_Result_ok(gid_t, _system_call_0(SYS_getgid));
}

#endif
