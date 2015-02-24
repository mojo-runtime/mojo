#ifndef linux_call6_hxx_
#define linux_call6_hxx_

#include "linux/__Word.hxx"

namespace linux {

template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
static inline
__Word
__call6(__Word number, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) noexcept
{
    __Word result;

#ifdef __x86_64__
    register A1 r1 asm ("rdi") = a1;
    register A2 r2 asm ("rsi") = a2;
    register A3 r3 asm ("rdx") = a3;
    register A4 r4 asm ("r10") = a4;
    register A5 r5 asm ("r8")  = a5;
    register A6 r6 asm ("r9")  = a6;

    asm volatile ("syscall"
                  : "=a" (result)
                  : "0" (number), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5), "r" (r6)
                  : "rcx", "r11");
#else
#  error
#endif

    return result;
}

} // namespace linux

#endif
