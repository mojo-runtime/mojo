#ifndef c_linux_gettid_h_
#define c_linux_gettid_h_

#include "attribute/nothrow.h"

#include "SYS_gettid.h"
#include "pid_t.h"
#include "_c_syscall0.h"
#include "_c_syscall_Result_ok.h"

attribute_nothrow
static
pid_t
gettid()
{
    return _c_syscall_Result_ok(pid_t, _c_syscall0(SYS_gettid));
}

#endif
