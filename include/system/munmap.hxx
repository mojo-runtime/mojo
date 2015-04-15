// -*- C++ -*-
#pragma once

#include "c/size_t.h"
#include "Result.hxx"

namespace system {

static inline
auto
munmap(void* addr, size_t length) noexcept
{
#if defined(__linux__)
#  include "c/EINVAL.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EINVAL),
    };

#  include "c/SYS_munmap.h"
#  undef _

    return Result<void, Error>(SYS_munmap, addr, length);

#else
#  error
#endif
}

}
