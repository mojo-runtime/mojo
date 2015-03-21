#pragma once

#include "c/SYS_gettid.h"
#include "c/pid_t.h"
#include "__call.hxx"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(__call(SYS_gettid));
}

}
