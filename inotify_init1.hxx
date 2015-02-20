#ifndef linux_inotify_init1_hxx_
#define linux_inotify_init1_hxx_

#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/ENOMEM.h"
#include "c/SYS_inotify_init1.h"
#include "c/_c_syscall1.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
inotify_init1(int flags) noexcept
{
    enum Error
    {
        // An invalid value was specified in `flags`.
        EINVAL = EINVAL,

        // The user limit on the total number of inotify instances has been reached.
        EMFILE = EMFILE,

        // The system limit on the total number of file descriptors has been reached.
        ENFILE = ENFILE,

        // Insufficient kernel memory is available.
        ENOMEM = ENOMEM,
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
        EMFILE = EMFILE,
        ENFILE = ENFILE,
        ENOMEM = ENOMEM,
    };

    return inotify_init1(0)._with_error<Error>();
}

} // namespace linux

#endif
