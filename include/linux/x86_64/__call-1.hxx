#ifndef _linux_x86_64_call_1_hxx_
#define _linux_x86_64_call_1_hxx_

#include "__Word.hxx"

namespace linux {
inline namespace x86_64 {

template <typename A1>
static inline
__Word
__call(__Word number, A1 a1) noexcept
{
    __Word
    output;

    register A1 r1 asm ("rdi") = a1;

    asm volatile (
        "syscall"
        : "=a" (output)
        : "0" (number), "r" (r1)
        : "rcx", "r11"
    );

    return output;
}

} // inline namespace x86_64
} // namespace linux

#endif
