#pragma once

#include "__Word.h"

namespace abi { inline namespace _x86_64_ { inline namespace _linux_ {

template <typename A1>
static inline
__Word
syscall(__Word number, A1 a1) noexcept
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

}}}
