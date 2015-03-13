#ifndef _linux_Result_hxx_
#define _linux_Result_hxx_

#include "abi/Word.hxx"
#include "std/assert!.hxx"
#include "std/enable_if_t.hxx"

namespace linux {

template <typename Ok, typename Error>
struct Result
{
    constexpr explicit
    Result(abi::Word word)
        : __word(word)
    {
    }

    //--------------------------------------------------------------------------------------------//

    constexpr
    std::enable_if_t<sizeof(abi::Word)==8, bool>
    is_error() const noexcept
    {
        return this->__word > 0xFFFFFFFFFFFFF000UL;
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
    abi::Word
    __word;
};

}

#endif
