#pragma once

#include "c/SYS_getppid.h"
#include "c/pid_t.h"

#include "abi/syscall-0.hxx"

namespace linux {

static inline
pid_t
getppid() noexcept
{
    return static_cast<pid_t>(abi::syscall(SYS_getppid));
}

}
