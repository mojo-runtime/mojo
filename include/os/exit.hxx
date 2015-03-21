#pragma once

namespace os {

[[noreturn]]
static inline
void
exit(int status) noexcept
{
    // Special case this one.
#if defined(__linux__)
#  if defined(__x86_64__)
    asm volatile ("syscall" :: "a" (60), "D" (status));
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  if defined(__x86_64__)
    asm volatile ("syscall" :: "a" (1), "D" (status));
#  else
#    error
#  endif
#else
#  error
#endif
    __builtin_unreachable();
};

}
