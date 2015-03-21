#pragma once

#include <SYS_gettid>
#include <pid_t>
#include "__call.hxx"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return __call<SYS_gettid>().ok<pid_t>();
}

}
