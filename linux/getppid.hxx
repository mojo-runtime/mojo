#pragma once

#include "c/pid_t.h"

#include "__call.hxx"

namespace linux {

static inline
pid_t
getppid() noexcept
{
#if defined(__x86_64__)
    return __call<110>().ok<pid_t>();
#else
#  error
#endif
}

}
