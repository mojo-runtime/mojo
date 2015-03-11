#ifndef _os_linux_inotify_init1_hxx_
#define _os_linux_inotify_init1_hxx_

#include "c/EINVAL.h"
#include "c/EMFILE.h"
#include "c/ENFILE.h"
#include "c/ENOMEM.h"
#include "c/SYS_inotify_init1.h"

#include "Result.hxx"
#include "__call-1.hxx"

namespace os { inline namespace _linux_ {

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

    return Result<int, Error>(__call(SYS_inotify_init1, flags));
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

}}

#endif
