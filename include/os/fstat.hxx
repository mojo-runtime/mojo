#pragma once

#include "c/SYS_fstat.h"
#include "c/struct-stat.h"
#include "Result.hxx"

namespace os {

static inline
auto
fstat(int fd, struct stat* sb) noexcept
{
#define _(name, doc) _##name = name
    enum Error
    {
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EBADF.h"
#  include "c/EFAULT.h"

        _(EBADF,
          "`fd` is not a valid open file descriptor."),

        _(EFAULT,
          "`sb` points to an invalid address."),

#endif
#if defined(__FreeBSD__)
#  include "c/EIO.h"

        _(EIO,
          "An I/O error occurred while reading from or writing to the file system."),

#endif
#if defined(__linux__)
#  include "c/ENOMEM.h"

        _(ENOMEM,
          "Out of kernel memory."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include "c/EOVERFLOW.h"

        _(EOVERFLOW,
          "The file size in bytes cannot be represented correctly"
          " in the structure pointed to by `sb`."),

#endif
    };
#undef _

    return Result<void, Error>(SYS_fstat, fd, sb);
}

}
