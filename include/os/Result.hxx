#pragma once

#if defined(__linux__)
#  include "linux/Result.hxx"

namespace os {

template <typename Ok, typename Error>
struct Result : linux::Result
{
    using __Base = linux::Result;
#else
#  error
#endif

    using __Base::__Base;

    //----------------------------------------------------------------------------------------------

    bool
    is_ok() const noexcept
    {
        return !this->is_error();
    }

    //----------------------------------------------------------------------------------------------

    Error
    error() const noexcept
    {
        return __Base::error<Error>();
    }

    Ok
    ok() const noexcept
    {
        return __Base::ok<Ok>();
    }
};

}
