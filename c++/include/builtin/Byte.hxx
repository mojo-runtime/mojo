#pragma once

#include "c/__Byte.h"
#include "Bool.hxx"

inline namespace builtin {

struct Byte
{
    //----------------------------------------------------------------------------------------------
    // Constructors

    constexpr explicit
    Byte(__Byte bits)
        : __bits(bits)
    {
    }

    //----------------------------------------------------------------------------------------------
    // Comparable

    constexpr
    Bool
    operator
    ==(const Byte& other) const noexcept
    {
        return Bool(this->__bits == other.__bits);
    }

    constexpr
    Bool
    operator
    !=(const Byte& other) const noexcept
    {
        return Bool(this->__bits != other.__bits);
    }

    //----------------------------------------------------------------------------------------------
    // Orderable

    constexpr
    Bool
    operator
    <(const Byte& other) const noexcept
    {
        return Bool(this->__bits < other.__bits);
    }

    constexpr
    Bool
    operator
    >(const Byte& other) const noexcept
    {
        return Bool(this->__bits > other.__bits);
    }

    constexpr
    Bool
    operator
    <=(const Byte& other) const noexcept
    {
        return Bool(this->__bits <= other.__bits);
    }

    constexpr
    Bool
    operator
    >=(const Byte& other) const noexcept
    {
        return Bool(this->__bits >= other.__bits);
    }

    //----------------------------------------------------------------------------------------------
    // Casts

    constexpr
    operator
    __Byte() const noexcept
    {
        return this->__bits;
    }

  private:
    __Byte
    __bits;
};

}
