#ifndef unix_getpid_h_
#define unix_getpid_h_

#include "c/SYS_getpid.h"
#include "c/pid_t.h"
#include "c/_c_nothrow.h"

#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_c_nothrow
static
pid_t
getpid()
{
    return _syscall_Result_ok(pid_t, _syscall_0(SYS_getpid));
}

#endif
