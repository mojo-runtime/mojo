#ifndef _linux_pipe2_hxx_
#define _linux_pipe2_hxx_

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/SYS_pipe2.h"

#include "Result.hxx"
#include "abi/syscall-2.hxx"

namespace linux {

static inline
auto
pipe2(int pipefd[2], int flags) noexcept
{
    enum Error
    {
        // `pipefd` is not valid.
        EFAULT_ = EFAULT,

        // Invalid value in `flags`.
        EINVAL_ = EINVAL,

        // Too many file descriptors are in use by the process.
        EMFILE_ = EMFILE,

        // The system limit on the total number of open files has been reached.
        ENFILE_ = ENFILE,
    };

    return Result<void, Error>(abi::syscall(SYS_pipe2, pipefd, flags));
}

static inline
auto
pipe2(int pipefd[2]) noexcept
{
    enum Error
    {
        EFAULT_ = EFAULT,
        // EINVAL
        EMFILE_ = EMFILE,
        ENFILE_ = ENFILE,
    };

    return pipe2(pipefd, 0)._with_error<Error>();
}

}

#endif
