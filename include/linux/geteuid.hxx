#pragma once

#include "c/SYS_geteuid.h"
#include "c/uid_t.h"
#include "__call.hxx"

namespace linux {

static inline
gid_t
geteuid() noexcept
{
    return __call<SYS_geteuid>().ok<uid_t>();
}

}
