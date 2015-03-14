#pragma once

#include "../../Word.hxx"

namespace abi { inline namespace _x86_64_ { inline namespace _linux_ {

template <typename A1>
static inline
Word
syscall(Word number, A1 a1) noexcept
{
    Word
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
