#pragma once

#define _E(rest) E##rest##_ = E##rest

#if defined(__arm__) && !defined(__thumb__)
#  define __CLOBBERS "memory"
#  define __R0 "r0"
#  define __R1 "r1"
#  define __R2 "r2"
#  define __R3 "r3"
#  define __R4 "r4"
#  define __R5 "r5"
#  define __R6 "r6"
#  define __TRAP "swi 0x0"
#elif defined(__x86_64__)
#  define __CLOBBERS "rcx", "r11"
#  define __R0 "rax"
#  define __R1 "rdi"
#  define __R2 "rsi"
#  define __R3 "rdx"
#  define __R4 "r10"
#  define __R5 "r8"
#  define __R6 "r9"
#  define __TRAP "syscall"
#else
#  error
#endif

namespace os { inline namespace linux {

template <typename Ok, typename Error>
struct Result;

template <>
struct Result<void, void>
{
    using Word = decltype(sizeof(int));

    Result(Word n) noexcept
    {
        register Word r0 asm (__R0) = n;

        asm volatile (__TRAP
                      : "=r" (r0)
                      : "r" (r0)
                      : __CLOBBERS);

        this->__word = r0;
    }

    template <typename A1>
    Result(Word n, A1 a1) noexcept
    {
        register Word r0 asm (__R0) = n;

        register A1 r1 asm (__R1) = a1;

        asm volatile (__TRAP
                      : "=r" (r0)
                      : "r" (r0), "r" (r1)
                      : __CLOBBERS);

        this->__word = r0;
    }

    template <typename A1, typename A2>
    Result(Word n, A1 a1, A2 a2) noexcept
    {
        register Word r0 asm (__R0) = n;

        register A1 r1 asm (__R1) = a1;
        register A2 r2 asm (__R2) = a2;

        asm volatile (__TRAP
                      : "=r" (r0)
                      : "r" (r0), "r" (r1), "r" (r2)
                      : __CLOBBERS);

        this->__word = r0;
    }

    template <typename A1, typename A2, typename A3>
    Result(Word n, A1 a1, A2 a2, A3 a3) noexcept
    {
        register Word r0 asm (__R0) = n;

        register A1 r1 asm (__R1) = a1;
        register A2 r2 asm (__R2) = a2;
        register A3 r3 asm (__R3) = a3;

        asm volatile (__TRAP
                      : "=r" (r0)
                      : "r" (r0), "r" (r1), "r" (r2), "r" (r3)
                      : __CLOBBERS);

        this->__word = r0;
    }

    template <typename A1, typename A2, typename A3, typename A4>
    Result(Word n, A1 a1, A2 a2, A3 a3, A4 a4) noexcept
    {
        register Word r0 asm (__R0) = n;

        register A1 r1 asm (__R1) = a1;
        register A2 r2 asm (__R2) = a2;
        register A3 r3 asm (__R3) = a3;
        register A4 r4 asm (__R4) = a4;

        asm volatile (__TRAP
                      : "=r" (r0)
                      : "r" (r0), "r" (r1), "r" (r2), "r" (r3), "r" (r4)
                      : __CLOBBERS);

        this->__word = r0;
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5>
    Result(Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) noexcept
    {
        register Word r0 asm (__R0) = n;

        register A1 r1 asm (__R1) = a1;
        register A2 r2 asm (__R2) = a2;
        register A3 r3 asm (__R3) = a3;
        register A4 r4 asm (__R4) = a4;
        register A5 r5 asm (__R5) = a5;

        asm volatile (__TRAP
                      : "=r" (r0)
                      : "r" (r0), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5)
                      : __CLOBBERS);

        this->__word = r0;
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
    Result(Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) noexcept
    {
        register Word r0 asm (__R0) = n;

        register A1 r1 asm (__R1) = a1;
        register A2 r2 asm (__R2) = a2;
        register A3 r3 asm (__R3) = a3;
        register A4 r4 asm (__R4) = a4;
        register A5 r5 asm (__R5) = a5;
        register A6 r6 asm (__R6) = a6;

        asm volatile (__TRAP
                      : "=r" (r0)
                      : "r" (r0), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5), "r" (r6)
                      : __CLOBBERS);

        this->__word = r0;
    }

  protected:
    Word
    __word;
};

template <typename Error>
struct Result<void, Error> : Result<void, void>
{
    using Result<void, void>::Result;

    explicit
    operator
    bool() const
    {
        return this->__word != 0;
    }

    Error
    error() const
    {
        return static_cast<Error>(-this->__word);
    }
};

template <typename Ok, typename Error>
struct Result : Result<void, Error>
{
    using Result<void, Error>::Result;

    explicit
    operator
    bool() const
    {
        return this->__word > 0xFFFFFFFFFFFFF000UL;
    }

    Ok
    ok() const
    {
        return static_cast<Ok>(this->__word);
    }
};

}}

#undef __CLOBBERS
#undef __R0
#undef __R1
#undef __R2
#undef __R3
#undef __R4
#undef __R5
#undef __R6
#undef __TRAP
