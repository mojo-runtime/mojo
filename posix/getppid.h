#ifndef c_posix_getppid_h_
#define c_posix_getppid_h_

#include "attribute/nothrow.h"

#include "SYS_getppid.h"
#include "pid_t.h"
#include "_c_syscall0.h"
#include "_c_syscall_Result_ok.h"

attribute_nothrow
static
pid_t
getppid()
{
    return _c_syscall_Result_ok(pid_t, _c_syscall0(SYS_getppid));
}

#endif
