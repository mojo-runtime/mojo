#pragma once

#include "integral_constant.hxx"

#if defined(__has_extension)
#  define __has_is_enum __has_extension(is_enum)
#elif defined(__GNUC__)
#  define __has_is_enum 1 // Version?
#else
#  error
#endif

namespace std {

#if __has_is_enum

template <typename T>
struct is_enum : integral_constant<bool, __is_enum(T)>
{
};

#else
#  error
#endif

}
