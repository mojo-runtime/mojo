#ifndef _linux_gettid_hxx_
#define _linux_gettid_hxx_

#include "c/SYS_gettid.h"
#include "c/pid_t.h"

#include "abi/syscall-0.hxx"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(abi::syscall(SYS_gettid));
}

}

#endif
