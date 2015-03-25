#pragma once

#include "integral_constant.hxx"

#if defined(__has_extension)
#  if __has_extension(is_union)

namespace std {

template <typename T>
struct is_union : integral_constant<bool, __is_union(T)>
{
};

}

#  else
#    error
#  endif
#else
#  error
#endif
