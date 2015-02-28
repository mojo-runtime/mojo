#ifndef linux_Result_hxx_
#define linux_Result_hxx_

#include "linux/_syscall_Result_is_error.h"
#include "linux/_syscall_Result_ok.h"

namespace linux {

template <typename Ok, typename Error>
struct Result
{
    typedef unsigned int __Word __attribute__((__mode__(__word__)));

    constexpr explicit
    Result(__Word word)
        : __word(word)
    {
    }

    //--------------------------------------------------------------------------------------------//

    constexpr
    bool
    is_error() const noexcept
    {
        return _syscall_Result_is_error(this->__word);
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
        return static_cast<Error>(-this->__word);
    }

    constexpr
    Ok
    ok() const noexcept
    {
        return _syscall_Result_ok(Ok, this->__word);
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
    __Word
    __word;
};

} // namespace linux

#endif
