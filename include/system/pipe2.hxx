// -*- C++ -*-
#pragma once

#include "Result.hxx"

namespace system {

static inline
auto
pipe2(int pipefd[2], int flags) noexcept
{
#if defined(__linux__)
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  include "c/EMFILE.h"
#  include "c/ENFILE.h"
#  define _(name) _##name = name

    enum Error
    {
        _(EFAULT),
        _(EINVAL),
        _(EMFILE),
        _(ENFILE),
    };

#  undef _
#  include "c/SYS_pipe2.h"

    return Result<void, Error>(SYS_pipe2, pipefd, flags);

#else
#  error
#endif
}

}
