#ifndef unix_getppid_h_
#define unix_getppid_h_

#include "c/SYS_getppid.h"
#include "c/_c_nothrow.h"

#include "pid_t.h"
#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_c_nothrow
static
pid_t
getppid()
{
    return _syscall_Result_ok(pid_t, _syscall_0(SYS_getppid));
}

#endif
