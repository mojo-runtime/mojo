#ifndef _std_forward_hxx_
#define _std_forward_hxx_

#include "remove_reference_t.hxx"

namespace std {

template <typename X>
static constexpr
X&&
forward(remove_reference_t<X>& x) noexcept
{
    return static_cast<X&&>(x);
}

template <typename X>
static constexpr
X&&
forward(remove_reference_t<X>&& x) noexcept
{
    return static_cast<X&&>(x);
}

} // namespace std

#endif
