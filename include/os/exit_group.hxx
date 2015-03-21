#pragma once

namespace os {

[[noreturn]]
static inline
void
exit_group(int status) noexcept
{
#if defined(__linux__)
#  if defined(__x86_64__)
    asm volatile ("syscall" :: "a" (231), "D" (status));
#  else
#    error
#  endif
#else
#  error
#endif
    __builtin_unreachable();
};

}
