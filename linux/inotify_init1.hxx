#ifndef linux_inotify_init1_hxx_
#define linux_inotify_init1_hxx_

#include "linux/c/_c_syscall1.h"
#include "linux/c/EINVAL.h"
#include "linux/c/EMFILE.h"
#include "linux/c/ENFILE.h"
#include "linux/c/ENOMEM.h"
#include "linux/c/SYS_inotify_init1.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
inotify_init1(int flags) noexcept
{
    enum Error
    {
        // An invalid value was specified in `flags`.
        EINVAL_ = EINVAL,

        // The user limit on the total number of inotify instances has been reached.
        EMFILE_ = EMFILE,

        // The system limit on the total number of file descriptors has been reached.
        ENFILE_ = ENFILE,

        // Insufficient kernel memory is available.
        ENOMEM_ = ENOMEM,
    };

    return Result<int, Error>(_c_syscall1(SYS_inotify_init1, flags));
}

static inline
auto
inotify_init1() noexcept
{
    enum Error
    {
        // EINVAL
        EMFILE_ = EMFILE,
        ENFILE_ = ENFILE,
        ENOMEM_ = ENOMEM,
    };

    return inotify_init1(0)._with_error<Error>();
}

} // namespace linux

#endif
