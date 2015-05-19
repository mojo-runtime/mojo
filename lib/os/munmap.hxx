#pragma once

#include <c/SYS_munmap.h>
#include <c/size_t.h>
#include "Result.hxx"

namespace os {

static inline
auto
munmap(void* address, size_t length) noexcept
{
#define _(name, doc) _##name = name
    enum Error
    {
#if defined(__linux__) || defined(__FreeBSD__)
#  include <c/EINVAL.h>

        _(EINVAL,
          "`address` is not page aligned"
          " / "
          "`length` is zero or negative"
          " / "
          "Some part of the region being unmapped"
          " is outside the valid address range for a process."),

#endif
    };
#undef _

    return Result<void, Error>(SYS_munmap, address, length);
}

}
