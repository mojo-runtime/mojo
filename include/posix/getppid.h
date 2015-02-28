#ifndef c_posix_getppid_h_
#define c_posix_getppid_h_

#include "compat/_Nothrow.h"

#include "SYS_getppid.h"
#include "pid_t.h"
#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_Nothrow
static
pid_t
getppid()
{
    return _syscall_Result_ok(pid_t, _syscall_0(SYS_getppid));
}

#endif
