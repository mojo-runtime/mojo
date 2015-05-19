#pragma once

#include <c/size_t.h>
#include "Result.hxx"

namespace os {

static inline
auto
getcwd(char* buf, size_t size) noexcept
{
#if defined(__linux__)
#  include <c/EACCES.h>
#  include <c/EFAULT.h>
#  include <c/EINVAL.h>
#  include <c/ENAMETOOLONG.h>
#  include <c/ENOENT.h>
#  include <c/ERANGE.h>
#  define _(name) _##name = name

    enum Error
    {
        _(EACCES),
        _(EFAULT),
        _(EINVAL),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ERANGE),
    };

#  undef _
#  include <c/SYS_getcwd.h>

    return Result<char*, Error>(SYS_getcwd, buf, size);

#else
#  error
#endif
}

}

