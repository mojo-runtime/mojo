#pragma once

#include "c/SYS_ioctl.h"
#include "Result.hxx"

namespace system {

// The type of `request` varies from man page to man page.
// See: https://sourceware.org/bugzilla/show_bug.cgi?id=14362

template <typename Arg>
static inline
auto
ioctl(int fd, int request, Arg arg) noexcept
{
#define _(name, doc) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__) // Same errors
#  include "c/EBADF.h"
#  include "c/EFAULT.h"
#  include "c/EINVAL.h"
#  include "c/ENOTTY.h"

        _(EBADF,
          "`fd` is not a valid descriptor."),

        _(EFAULT,
          "`argument` references an inaccessible memory area."),

        _(EINVAL,
          "`request` or `argument` is not valid."),

        _(ENOTTY,
          "`fd` is not associated with a character special device."
          " / "
          "The specified request does not apply to"
          " the kind of object that the descriptor `d` references."),

#endif
    };
#undef _

    return Result<void, Error>(SYS_ioctl, fd, request, arg);
}

}
