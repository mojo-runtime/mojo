#pragma once

#include "c/__Word.h"

namespace os::linux::x86_64 {

struct Result
{
    Result(__Word n) noexcept
    {
        asm volatile (
            "syscall"
            : "=a" (this->__word)
            : "0" (n)
            : "rcx", "r11"
        );
    }

    //----------------------------------------------------------------------------------------------

    template <typename A1>
    Result(__Word n, A1 a1) noexcept
    {
        register A1 r1 asm ("rdi") = a1;

        asm volatile (
            "syscall"
            : "=a" (this->__word)
            : "0" (n), "r" (r1)
            : "rcx", "r11"
        );
    }

    //----------------------------------------------------------------------------------------------

    template <typename A1, typename A2>
    Result(__Word n, A1 a1, A2 a2) noexcept
    {
        register A1 r1 asm ("rdi") = a1;
        register A2 r2 asm ("rsi") = a2;

        asm volatile (
            "syscall"
            : "=a" (this->__word)
            : "0" (n), "r" (r1), "r" (r2)
            : "rcx", "r11"
        );
    }

    template <typename A1, typename A2, typename A3>
    Result(__Word n, A1 a1, A2 a2, A3 a3) noexcept
    {
        register A1 r1 asm ("rdi") = a1;
        register A2 r2 asm ("rsi") = a2;
        register A3 r3 asm ("rdx") = a3;

        asm volatile (
            "syscall"
            : "=a" (this->__word)
            : "0" (n), "r" (r1), "r" (r2), "r" (r3)
            : "rcx", "r11"
        );
    }

    template <typename A1, typename A2, typename A3, typename A4>
    Result(__Word n, A1 a1, A2 a2, A3 a3, A4 a4) noexcept
    {
        register A1 r1 asm ("rdi") = a1;
        register A2 r2 asm ("rsi") = a2;
        register A3 r3 asm ("rdx") = a3;
        register A4 r4 asm ("r10") = a4;

        asm volatile (
            "syscall"
            : "=a" (this->__word)
            : "0" (n), "r" (r1), "r" (r2), "r" (r3), "r" (r4)
            : "rcx", "r11"
        );
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5>
    Result(__Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) noexcept
    {
        register A1 r1 asm ("rdi") = a1;
        register A2 r2 asm ("rsi") = a2;
        register A3 r3 asm ("rdx") = a3;
        register A4 r4 asm ("r10") = a4;
        register A5 r5 asm ("r8")  = a5;

        asm volatile (
            "syscall"
            : "=a" (this->__word)
            : "0" (n), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5)
            : "rcx", "r11"
        );
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
    Result(__Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) noexcept
    {
        register A1 r1 asm ("rdi") = a1;
        register A2 r2 asm ("rsi") = a2;
        register A3 r3 asm ("rdx") = a3;
        register A4 r4 asm ("r10") = a4;
        register A5 r5 asm ("r8")  = a5;
        register A6 r6 asm ("r9")  = a6;

        asm volatile (
            "syscall"
            : "=a" (this->__word)
            : "0" (n), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5), "r" (r6)
            : "rcx", "r11"
        );
    }

  protected:
    __Word
    __word;
};

}
