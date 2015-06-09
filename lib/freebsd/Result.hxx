#pragma once

#define _E(rest) E##rest##_ = E##rest

namespace freebsd {

template <typename Ok, typename Error>
struct Result;

template <>
struct Result<void, void>
{
    using Word = decltype(sizeof(int));

#if defined(__x86_64__)
    Result(Word n) noexcept
    {
        asm volatile ("syscall"
                      "\nsbb %1, %1"
                      : "=a" (this->__word), "=r" (this->__is_error)
                      : "a" (n)
                      : "memory");
    }

    template <typename A1>
    Result(Word n, A1 a1) noexcept
    {
        asm volatile ("syscall"
                      "\nsbb %1, %1"
                      : "=a" (this->__word), "=r" (this->__is_error)
                      : "a" (n), "D" (a1)
                      : "memory");
    }

    template <typename A1, typename A2>
    Result(Word n, A1 a1, A2 a2) noexcept
    {
        asm volatile ("syscall"
                      "\nsbb %1, %1"
                      : "=a" (this->__word), "=r" (this->__is_error)
                      : "a" (n), "D" (a1), "S" (a2)
                      : "memory");
    }

    template <typename A1, typename A2, typename A3>
    Result(Word n, A1 a1, A2 a2, A3 a3) noexcept
    {
        asm volatile ("syscall"
                      "\nsbb %1, %1"
                      : "=a" (this->__word), "=r" (this->__is_error)
                      : "a" (n), "D" (a1), "S" (a2), "d" (a3)
                      : "memory");
    }

    template <typename A1, typename A2, typename A3, typename A4>
    Result(Word n, A1 a1, A2 a2, A3 a3, A4 a4) noexcept
    {
        asm volatile ("syscall"
                      "\nsbb %1, %1"
                      : "=a" (this->__word), "=r" (this->__is_error)
                      : "a" (n), "D" (a1), "S" (a2), "d" (a3), "c" (a4)
                      : "memory");
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5>
    Result(Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) noexcept
    {
        register A5 r5 asm ("r8") = a5;

        asm volatile ("syscall"
                      "\nsbb %1, %1"
                      : "=a" (this->__word), "=r" (this->__is_error)
                      : "a" (n), "D" (a1), "S" (a2), "d" (a3), "c" (a4), "r" (r5)
                      : "memory");
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
    Result(Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) noexcept
    {
        register A5 r5 asm ("r8") = a5;
        register A6 r6 asm ("r9") = a6;

        asm volatile ("syscall"
                      "\nsbb %1, %1"
                      : "=a" (this->__word), "=r" (this->__is_error)
                      : "a" (n), "D" (a1), "S" (a2), "d" (a3), "c" (a4), "r" (r5), "r" (r6)
                      : "memory");
    }
#else
#  error
#endif

  protected:
    Word
    __word;

    Word
    __is_error;
};

template <typename Error>
struct Result<void, Error> : Result<void, void>
{
    using Result<void, void>::Result;

    explicit
    operator
    bool() const noexcept
    {
        return this->__is_error;
    }

    Error
    error() const
    {
        return static_cast<Error>(this->__word);
    }
};

template <typename Ok, typename Error>
struct Result : Result<void, Error>
{
    using Result<void, Error>::Result;

    Ok
    ok() const
    {
        return static_cast<Ok>(this->__word);
    }
};

}
