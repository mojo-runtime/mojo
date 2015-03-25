#pragma once

#include "__Word.h"
#include "__noexcept.h"
#include "__noreturn.h"

__noreturn
static inline
void
__syscall_1_no_return(__Word n, __Word a1) __noexcept
{
#if defined(__x86_64__)
    __asm__ __volatile__ ("syscall" :: "a" (n), "D" (a1));
#elif defined(__arm__) && !defined(__thumb__)
    register __Word r0 __asm__ ("r0") = n;
    register __Word r1 __asm__ ("r1") = a1;
    __asm__ __volatile__ ("swi 0x0" :: "r" (r0), "r" (r1));
#else
#  error
#endif
    __builtin_unreachable();
}
