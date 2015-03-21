#pragma once

#include <SYS_exit>
#include "__call.hxx"

namespace linux {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
    __call<SYS_exit>(status);
    __builtin_unreachable();
};

}
