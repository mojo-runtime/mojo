#pragma once

#include <SYS_getppid>
#include <pid_t>
#include "__call.hxx"

namespace linux {

static inline
pid_t
getppid() noexcept
{
    return __call<SYS_getppid>().ok<pid_t>();
}

}
