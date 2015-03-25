#pragma once

#include "c/__syscall.h"

namespace os {

template <typename Ok, typename Error>
struct Result
{
    Result(__Word n) noexcept
        : __base(__syscall_0(n))
    {
    }

    template <typename A1>
    Result(__Word n, A1 a1) noexcept
        : __base(__syscall_1(n, __Word(a1)))
    {
    }

    template <typename A1, typename A2>
    Result(__Word n, A1 a1, A2 a2) noexcept
        : __base(__syscall_2(n, __Word(a1), __Word(a2)))
    {
    }

    template <typename A1, typename A2, typename A3>
    Result(__Word n, A1 a1, A2 a2, A3 a3) noexcept
        : __base(__syscall_3(n, __Word(a1), __Word(a2), __Word(a3)))
    {
    }

    template <typename A1, typename A2, typename A3, typename A4>
    Result(__Word n, A1 a1, A2 a2, A3 a3, A4 a4) noexcept
        : __base(__syscall_4(n, __Word(a1), __Word(a2), __Word(a3), __Word(a4)))
    {
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5>
    Result(__Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) noexcept
        : __base(__syscall_5(n, __Word(a1), __Word(a2), __Word(a3), __Word(a4), __Word(a5)))
    {
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
    Result(__Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) noexcept
        : __base(__syscall_6(n, __Word(a1), __Word(a2), __Word(a3), __Word(a4), __Word(a5), __Word(a6)))
    {
    }

    //----------------------------------------------------------------------------------------------

    bool
    is_error() const noexcept
    {
        return __syscall_Result_is_error(this->__base);
    }

    bool
    is_ok() const noexcept
    {
        return !this->is_error();
    }

    //----------------------------------------------------------------------------------------------

    Error
    error() const noexcept
    {
        return static_cast<Error>(__syscall_Result_error(this->__base));
    }

    Ok
    ok() const noexcept
    {
        return static_cast<Ok>(__syscall_Result_ok(this->__base));
    }

  private:
    __syscall_Result
    __base;
};

}
