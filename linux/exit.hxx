#pragma once

#include "__call.hxx"

namespace linux {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
#if defined(__x86_64__)
    __call<60>(status);
#else
#  error
#endif
    __builtin_unreachable();
};

}
