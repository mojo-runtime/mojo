#pragma once

#include "__Word.h"

namespace abi { inline namespace _x86_64_ { inline namespace _linux_ {

static inline
__Word
syscall(__Word number) noexcept
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

}}}
