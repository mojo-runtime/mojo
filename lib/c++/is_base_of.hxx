#pragma once

#include "integral_constant.hxx"

#if defined(__has_extension)
#  define __has_is_base_of __has_extension(is_base_of)
#elif defined(__GNUC__)
#  define __has_is_base_of 1 // Version?
#else
#  error
#endif

namespace std {

#if __has_is_base_of

template <typename Base, typename Derived>
struct is_base_of : integral_constant<bool, __is_base_of(Base, Derived)>
{
};

#else
#  error
#endif

}
