#pragma once

// Roll this special case by hand.

namespace os {

[[noreturn]]
static inline
void
_exit(int status) noexcept
{
    // Without a return, these are almost the same.
#if defined(__linux__) && defined(__x86_64__)
    asm volatile ("syscall" :: "a" (60), "D" (status));
#elif defined(__FreeBSD__) && defined(__x86_64__)
    asm volatile ("syscall" :: "a" (1), "D" (status));
#else
#  error
#endif
    __builtin_unreachable();
}

} // namespace os
