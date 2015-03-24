#pragma once

#if defined(__x86_64__)
#  include "x86_64/Result.hxx"

namespace os::linux {
struct Result : x86_64::Result
{
    using __Base = x86_64::Result;
#else
#  error
#endif

    using __Base::__Base;

    //----------------------------------------------------------------------------------------------

    bool
    is_error() const noexcept
    {
        return this->__word > 0xFFFFFFFFFFFFF000UL;
    }

    bool
    is_ok() const noexcept
    {
        return !this->is_error();
    }

    //----------------------------------------------------------------------------------------------

    template <typename Error>
    Error
    error() const noexcept
    {
        return static_cast<Error>(-this->__word);
    }

    template <typename Ok>
    Ok
    ok() const noexcept
    {
        return static_cast<Ok>(this->__word);
    }
};

};
