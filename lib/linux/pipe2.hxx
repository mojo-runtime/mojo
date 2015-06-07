#pragma once

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "Result.hxx"

#if defined(__arm__)
#  define __NR_pipe2 359
#elif defined(__x86_64__)
#  define __NR_pipe2 293
#else
#  error
#endif

namespace linux {

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

    return Result<void, Error>(__NR_pipe2, pipefd, flags);
}

}
