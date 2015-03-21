#pragma once

#include <SYS_getpgid>
#include <pid_t>
#include "__call.hxx"

namespace linux {

static inline
pid_t
getpgid() noexcept
{
    return __call<SYS_getpgid>().ok<pid_t>();
}

}
