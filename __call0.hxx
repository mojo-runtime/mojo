#ifndef linux_call0_hxx_
#define linux_call0_hxx_

#include "linux/__Word.hxx"

namespace linux {

static inline
__Word
__call0(__Word number) noexcept
{
    __Word result;

#ifdef __x86_64__
    asm volatile ("syscall"
                  : "=a" (result)
                  : "0" (number)
                  : "rcx", "r11");
#else
#  error
#endif

    return result;
}

} // namespace linux

#endif
