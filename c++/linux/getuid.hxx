#pragma once

#include "SYS_getuid.h"
#include "uid_t.h"

#include "abi/syscall-0.hxx"

namespace linux {

static inline
uid_t
getuid() noexcept
{
    return static_cast<uid_t>(abi::syscall(SYS_getuid));
}

}
