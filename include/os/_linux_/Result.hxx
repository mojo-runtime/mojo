#pragma once

#include "os/__call.hxx"

namespace os { inline namespace _linux_ {

template <typename Ok, typename Error>
struct Result
{
    template <typename... Args>
    Result(Args&&... args)
        : __word(__call(args...))
    {
    }

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

    Error
    error() const noexcept
    {
        return static_cast<Error>(-this->__word);
    }

    Ok
    ok() const noexcept
    {
        return static_cast<Ok>(this->__word);
    }

    //----------------------------------------------------------------------------------------------

  private:
    Word
    __word;
};

}}
