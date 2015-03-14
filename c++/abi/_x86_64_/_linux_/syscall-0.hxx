#pragma once

#include "../../Word.hxx"

namespace abi { inline namespace _x86_64_ { inline namespace _linux_ {

static inline
Word
syscall(Word number) noexcept
{
    Word
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
