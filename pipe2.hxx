#ifndef linux_pipe2_hxx_
#define linux_pipe2_hxx_

#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/SYS_pipe2.h"
#include "c/_c_syscall2.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
pipe2(int pipefd[2], int flags) noexcept
{
    enum Error
    {
        // `pipefd` is not valid.
        EFAULT = EFAULT,

        // Invalid value in `flags`.
        EINVAL = EINVAL,

        // Too many file descriptors are in use by the process.
        EMFILE = EMFILE,

        // The system limit on the total number of open files has been reached.
        ENFILE = ENFILE,
    };

    return Result<void, Error>(_c_syscall2(SYS_pipe2, pipefd, flags));
}

} // namespace linux

#endif
