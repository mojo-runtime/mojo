#pragma once

#include <SYS_getpid>
#include <pid_t>
#include "__call.hxx"

namespace linux {

static inline
pid_t
getpid() noexcept
{
    return __call<SYS_getpid>().ok<pid_t>();
}

}
