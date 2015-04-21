#pragma once

#include "c/__syscall.h"

namespace os {

template <typename Ok, typename Error>
struct Result : private __Result
{
    Result(__Word n) noexcept
        : __Result(__syscall_0(n))
    {
    }

    template <typename A1>
    Result(__Word n, A1 a1) noexcept
        : __Result(__syscall_1(n, __Word(a1)))
    {
    }

    template <typename A1, typename A2>
    Result(__Word n, A1 a1, A2 a2) noexcept
        : __Result(__syscall_2(n, __Word(a1), __Word(a2)))
    {
    }

    template <typename A1, typename A2, typename A3>
    Result(__Word n, A1 a1, A2 a2, A3 a3) noexcept
        : __Result(__syscall_3(n, __Word(a1), __Word(a2), __Word(a3)))
    {
    }

    template <typename A1, typename A2, typename A3, typename A4>
    Result(__Word n, A1 a1, A2 a2, A3 a3, A4 a4) noexcept
        : __Result(__syscall_4(n, __Word(a1), __Word(a2), __Word(a3), __Word(a4)))
    {
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5>
    Result(__Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) noexcept
        : __Result(__syscall_5(n, __Word(a1), __Word(a2), __Word(a3), __Word(a4), __Word(a5)))
    {
    }

    template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
    Result(__Word n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) noexcept
        : __Result(__syscall_6(n, __Word(a1), __Word(a2), __Word(a3), __Word(a4), __Word(a5), __Word(a6)))
    {
    }

    //----------------------------------------------------------------------------------------------

    bool
    is_error() const noexcept
    {
        return __Result_is_error(*this);
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
        return static_cast<Error>(__Result_error_number(*this));
    }

    Ok
    ok() const noexcept
    {
        return static_cast<Ok>(this->__word);
    }
};

}
