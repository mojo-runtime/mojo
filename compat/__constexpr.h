#pragma once // C++14's "relaxed" constexpr

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__constexpr)
#  include "config/__has_cxx_relaxed_constexpr.h"
#  if __has_cxx_relaxed_constexpr
#    define __constexpr constexpr
#  endif
#endif

#if !defined(__constexpr)
#  include "config/__has_attribute_const.h"
#  if __has_attribute_const
#    define __constexpr __attribute__((__const__))
#  endif
#endif

#if !defined(__constexpr)
#  define __constexpr
#endif

#pragma clang diagnostic pop
