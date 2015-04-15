// -*- C++ -*-
#pragma once

#include "integral_constant.hxx"

#if defined(__has_extension)
#  define _has_primitive __has_extension(is_union)
#elif defined(__GNUC__) // Version?
#  define _has_primitive 1
#else
#  error
#endif

#if _has_primitive

namespace std {

template <typename T>
struct is_union : integral_constant<bool, __is_union(T)>
{
};

}

#else
#  error
#endif

#undef _has_primitive
