#pragma once

#include "integral_constant.hxx"

#if defined(__has_extension)
#  if __has_extension(is_enum)

namespace std {

template <typename T>
struct is_enum : integral_constant<bool, __is_enum(T)>
{
};

}

#  else
#    error
#  endif
#else
#  error
#endif
