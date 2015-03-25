#pragma once

#include "integral_constant.hxx"

#if defined(__has_extension)
#  if __has_extension(is_enum)

namespace std {

template <typename __X>
struct is_enum : integral_constant<bool, __is_enum(__X)>
{
};

}

#  else
#    error
#  endif
#else
#  error
#endif
