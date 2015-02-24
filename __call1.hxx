#ifndef linux_call1_hxx_
#define linux_call1_hxx_

#include "linux/__Word.hxx"

namespace linux {

template <typename A1>
static inline
__Word
__call1(__Word number, A1 a1) noexcept
{
    __Word result;

#ifdef __x86_64__
    register A1 r1 asm ("rdi") = a1;

    asm volatile ("syscall"
                  : "=a" (result)
                  : "0" (number), "r" (r1)
                  : "rcx", "r11");
#else
#  error
#endif

    return result;
}

} // namespace linux

#endif
