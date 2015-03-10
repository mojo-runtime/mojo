#ifndef c_linux_gettid_h_
#define c_linux_gettid_h_

#include "c/_c_nothrow.h"

#include "SYS_gettid.h"
#include "pid_t.h"
#include "_syscall_0.h"
#include "_syscall_Result_ok.h"

_c_nothrow
static
pid_t
gettid()
{
    return _syscall_Result_ok(pid_t, _syscall_0(SYS_gettid));
}

#endif
