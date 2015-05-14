#pragma once

#include "c/__Word.h"
#include "Bool.hxx"

inline namespace builtin {

struct Word
{
    //----------------------------------------------------------------------------------------------
    // Constructors

    constexpr explicit
    Word(__Word bits)
        : __bits(bits)
    {
    }

    //----------------------------------------------------------------------------------------------
    // Comparable

    constexpr
    Bool
    operator
    ==(const Word& other) const noexcept
    {
        return Bool(this->__bits == other.__bits);
    }

    constexpr
    Bool
    operator
    !=(const Word& other) const noexcept
    {
        return Bool(this->__bits != other.__bits);
    }

    //----------------------------------------------------------------------------------------------
    // Casts

    constexpr
    operator
    __Word() const noexcept
    {
        return this->__bits;
    }

  private:
    __Word
    __bits;
};

}
