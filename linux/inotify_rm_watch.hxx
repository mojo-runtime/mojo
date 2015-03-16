#pragma once

#include "EBADF.h"
#include "EINVAL.h"
#include "SYS_inotify_rm_watch.h"
#include "__syscall2.h"

#include "Result.hxx"

namespace linux {

static inline
auto
inotify_rm_watch(int fd, int wd) noexcept
{
    enum Error
    {
        // `fd` is not a valid file descriptor.
        EBADF_ = EBADF,

        // The watch descriptor `wd` is not valid.
        //
        // `fd` is not an inotify file descriptor.
        EINVAL_ = EINVAL,
    };

    return Result<void, Error>(__syscall2(SYS_inotify_rm_watch, fd, wd));
}

}
