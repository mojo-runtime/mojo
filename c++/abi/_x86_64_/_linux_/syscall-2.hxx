#pragma once

#include "__Word.h"

namespace abi { inline namespace _x86_64_ { inline namespace _linux_ {

template <typename A1, typename A2>
static inline
__Word
syscall(__Word number, A1 a1, A2 a2) noexcept
{
    __Word
    output;

    register A1 r1 asm ("rdi") = a1;
    register A2 r2 asm ("rsi") = a2;

    asm volatile (
        "syscall"
        : "=a" (output)
        : "0" (number), "r" (r1), "r" (r2)
        : "rcx", "r11"
    );

    return output;
}

}}}
