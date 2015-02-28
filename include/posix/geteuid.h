#ifndef c_posix_geteuid_h_
#define c_posix_geteuid_h_

#include "compatibility/x_nothrow.h"

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "_system_call_0.h"
#include "_system_Result_ok.h"

x_nothrow
static
uid_t
geteuid()
{
    return _system_Result_ok(uid_t, _system_call_0(SYS_geteuid));
}

#endif
