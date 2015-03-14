#pragma once

#include "../../Word.hxx"

namespace abi { inline namespace _x86_64_ { inline namespace _linux_ {

template <typename A1, typename A2, typename A3, typename A4>
static inline
Word
syscall(Word number, A1 a1, A2 a2, A3 a3, A4 a4) noexcept
{
    Word
    output;

    register A1 r1 asm ("rdi") = a1;
    register A2 r2 asm ("rsi") = a2;
    register A3 r3 asm ("rdx") = a3;
    register A4 r4 asm ("r10") = a4;

    asm volatile (
        "syscall"
        : "=a" (output)
        : "0" (number), "r" (r1), "r" (r2), "r" (r3), "r" (r4)
        : "rcx", "r11"
    );

    return output;
}

}}}
