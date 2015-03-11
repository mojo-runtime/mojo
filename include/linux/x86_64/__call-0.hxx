#ifndef _linux_x86_64_call_0_hxx_
#define _linux_x86_64_call_0_hxx_

#include "__Word.hxx"

namespace linux {
inline namespace x86_64 {

static inline
__Word
__call(__Word number) noexcept
{
    __Word
    output;

    asm volatile (
        "syscall"
        : "=a" (output)
        : "0" (number)
        : "rcx", "r11"
    );

    return output;
}

} // inline namespace x86_64
} // namespace linux

#endif
