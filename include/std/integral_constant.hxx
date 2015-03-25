#pragma once

namespace std {

template <typename __X, __X __x>
struct integral_constant
{
    // Member types

    using type       = integral_constant;
    using value_type = __X;

    // Member constants

    static constexpr
    __X
    value = __x;

    // Member functions

    constexpr
    operator
    __X() const noexcept
    {
        return __x;
    }

    constexpr
    __X
    operator
    ()() const noexcept
    {
        return __x;
    }
};

}
