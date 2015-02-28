#ifndef linux_inotify_init1_hxx_
#define linux_inotify_init1_hxx_

#include "linux/_syscall_1.h"
#include "linux/EINVAL.h"
#include "linux/EMFILE.h"
#include "linux/ENFILE.h"
#include "linux/ENOMEM.h"
#include "linux/SYS_inotify_init1.h"

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

    return Result<int, Error>(_syscall_1(SYS_inotify_init1, flags));
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
