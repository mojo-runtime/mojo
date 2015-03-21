#pragma once

#include "c/SYS_getpgid.h"
#include "c/pid_t.h"
#include "__call.hxx"

namespace linux {

static inline
pid_t
getpgid() noexcept
{
    return __call<SYS_getpgid>().ok<pid_t>();
}

}
