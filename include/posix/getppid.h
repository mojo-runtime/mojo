#ifndef c_posix_getppid_h_
#define c_posix_getppid_h_

#include "attribute/nothrow.h"

#include "SYS_getppid.h"
#include "pid_t.h"
#include "_system_call_0.h"
#include "_system_Result_ok.h"

attribute_nothrow
static
pid_t
getppid()
{
    return _system_Result_ok(pid_t, _system_call_0(SYS_getppid));
}

#endif
