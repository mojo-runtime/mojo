#pragma once

#include "c/SYS_getpid.h"
#include "c/pid_t.h"
#include "__call.hxx"

namespace linux {

static inline
pid_t
getpid() noexcept
{
    return __call<SYS_getpid>().ok<pid_t>();
}

}
