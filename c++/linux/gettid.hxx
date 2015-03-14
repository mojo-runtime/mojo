#pragma once

#include "SYS_gettid.h"
#include "pid_t.h"

#include "abi/syscall-0.hxx"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(abi::syscall(SYS_gettid));
}

}
