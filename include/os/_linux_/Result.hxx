#ifndef _os_linux_Result_hxx_
#define _os_linux_Result_hxx_

#include "c/assert.h"
#include "compat/__POINTER_WIDTH__.h"

#include "platform/Word.hxx"

namespace os { inline namespace _linux_ {

template <typename Ok, typename Error>
struct Result
{
    constexpr explicit
    Result(platform::Word word)
        : __word(word)
    {
    }

    //--------------------------------------------------------------------------------------------//

    constexpr
    bool
    is_error() const noexcept
    {
#if (__POINTER_WIDTH__ == 64)
        return this->__word > 0xFFFFFFFFFFFFF000UL;
#else
#  error
#endif
    }

    constexpr
    bool
    is_ok() const noexcept
    {
        return !this->is_error();
    }

    constexpr
    Error
    error() const noexcept
    {
        assert(this->is_error());
        return static_cast<Error>(-this->__word);
    }

    constexpr
    Ok
    ok() const noexcept
    {
        assert(this->is_ok());
        return static_cast<Ok>(this->__word);
    }

    //--------------------------------------------------------------------------------------------//

    template <typename NewError>
    constexpr
    auto
    _with_error() const noexcept
    {
        return Result<Ok, NewError>(this->__word);
    }

  private:
    platform::Word
    __word;
};

}}

#endif
