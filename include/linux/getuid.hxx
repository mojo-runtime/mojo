#pragma once

#include "c/SYS_getuid.h"
#include "c/uid_t.h"
#include "__call.hxx"

namespace linux {

static inline
uid_t
getuid() noexcept
{
    return __call<SYS_getuid>().ok<uid_t>();
}

}
