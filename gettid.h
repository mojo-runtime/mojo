#ifndef c_gettid_h_
#define c_gettid_h_

#include "SYS_gettid.h"
#include "pid_t.h"
#include "_internal/_c_noexcept.h"
#include "_internal/_c_static_cast.h"
#include "_internal/_c_syscall0.h"

static
pid_t
gettid() _c_noexcept
{
    return _c_static_cast(pid_t, _c_syscall0(SYS_gettid));
}

#endif
