#pragma once

#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/ENOMEM.h"
#include "Result.hxx"

#define __NR_pipe2 542

namespace os { inline namespace freebsd {

static inline
auto
pipe2(int pipefd[2], int flags) noexcept
{
    enum Error
    {
        _E(INVAL),
        _E(MFILE),
        _E(NFILE),
        _E(NOMEM),
    };

    return Result<void, Error>(__NR_pipe2, pipefd, flags);
}

}}
