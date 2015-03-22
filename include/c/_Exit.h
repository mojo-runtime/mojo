#pragma once

__attribute__((__noreturn__, __nothrow__))
static inline
void
_Exit(int status)
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
