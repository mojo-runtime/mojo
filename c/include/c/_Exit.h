#pragma once

__attribute__((__noreturn__, __nothrow__))
static inline
void
_Exit(int status)
{
#if defined(__x86_64__)
#  if defined(__linux__)
    __asm__ __volatile__ ("syscall" :: "a" (60), "D" (status));
#  elif defined(__FreeBSD__)
    __asm__ __volatile__ ("syscall" :: "a" (1), "D" (status));
#  else
#    error
#  endif
#elif defined(__arm__) && !defined(__thumb__)
#  if defined(__linux__)
    register int r0 __asm__ ("r0") = 1;
    register int r1 __asm__ ("r1") = status;
    __asm__ __volatile__ ("swi 0x0" :: "r" (r0), "r" (r1));
#  else
#    error
#  endif
#else
#  error
#endif
    __builtin_unreachable();
}
