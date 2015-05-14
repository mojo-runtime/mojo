#pragma once

#include "c/__Bool.h"

inline namespace builtin {

struct Bool
{
    //----------------------------------------------------------------------------------------------
    // Constructors

    constexpr explicit
    Bool(__Bool bits)
        : __bits(bits)
    {
    }

    //----------------------------------------------------------------------------------------------
    // Comparable

    constexpr
    Bool
    operator
    ==(const Bool& other) const noexcept
    {
        return Bool(this->__bits == other.__bits);
    }

    constexpr
    Bool
    operator
    !=(const Bool& other) const noexcept
    {
        return Bool(this->__bits != other.__bits);
    }

    //----------------------------------------------------------------------------------------------
    // Inversion

    constexpr
    Bool
    operator
    !() const noexcept
    {
        return Bool(!this->__bits);
    }

    //----------------------------------------------------------------------------------------------
    // Casts

    constexpr
    operator
    __Bool() const noexcept
    {
        return this->__bits;
    }

  private:
    __Bool
    __bits;
};

}
