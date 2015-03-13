#ifndef _abi_x86_64_linux_syscall_2_hxx_
#define _abi_x86_64_linux_syscall_2_hxx_

#include "../../Word.hxx"

namespace abi { inline namespace _x86_64_ { inline namespace _linux_ {

template <typename A1, typename A2>
static inline
Word
syscall(Word number, A1 a1, A2 a2) noexcept
{
    Word
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

#endif
