#pragma once

#include "SYS_gettid.h"
#include "pid_t.h"
#include "__syscall0.h"

namespace linux {

static inline
pid_t
gettid() noexcept
{
    return static_cast<pid_t>(__syscall0(SYS_gettid));
}

}
