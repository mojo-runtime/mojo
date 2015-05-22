#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "syscall/SYS_pipe2.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
pipe2(int pipefd[2], int flags) noexcept
{
    enum Error
    {
        _E(FAULT),
        _E(INVAL),
        _E(MFILE),
        _E(NFILE),
    };

    return Result<void, Error>(SYS_pipe2, pipefd, flags);
}

}}
