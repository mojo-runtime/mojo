#pragma once

#include "__call.hxx"

namespace linux {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
#if defined(__x86_64__)
    __call<231>(status);
#else
#  error
#endif
    __builtin_unreachable();
};

}
