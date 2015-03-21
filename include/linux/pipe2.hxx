#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/SYS_pipe2.h"

#include "Result.hxx"

namespace linux {

static inline
auto
pipe2(int pipefd[2], int flags) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EFAULT),
        _(EINVAL),
        _(EMFILE),
        _(ENFILE),
#undef _
    };

    return Result<void, Error>(SYS_pipe2, pipefd, flags);
}

}
