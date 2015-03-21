#pragma once

#include "c/SYS_geteuid.h"
#include "c/uid_t.h"
#include "__call.hxx"

namespace linux {

static inline
gid_t
geteuid() noexcept
{
    return static_cast<uid_t>(__call<SYS_geteuid>());
}

}
