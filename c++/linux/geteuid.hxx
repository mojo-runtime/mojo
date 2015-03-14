#pragma once

#include "SYS_geteuid.h"
#include "uid_t.h"
#include "__syscall0.h"

namespace linux {

static inline
uid_t
geteuid() noexcept
{
    return static_cast<uid_t>(__syscall0(SYS_geteuid));
}

}
