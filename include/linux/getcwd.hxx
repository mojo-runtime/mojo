#pragma once

#include "c/EACCES.h"
#include "c/EFAULT.h"
#include "c/EINVAL.h"
#include "c/ENAMETOOLONG.h"
#include "c/ENOENT.h"
#include "c/ERANGE.h"
#include "c/SYS_getcwd.h"
#include "c/size_t.h"

#include "Result.hxx"

namespace linux {

static inline
auto
getcwd(char* buf, size_t size) noexcept
{
    enum Error
    {
#define _(name) _##name = name
        _(EACCES),
        _(EFAULT),
        _(EINVAL),
        _(ENAMETOOLONG),
        _(ENOENT),
        _(ERANGE),
#undef _
    };

    return Result<char*, Error>(SYS_getcwd, buf, size);
}

}
