#pragma once // C++14's "relaxed" constexpr

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_feature)
#    if __has_feature(cxx_relaxed_constexpr)
#      define __constexpr constexpr
#    endif
#  elif defined(__GNUC__)
#    if (__GNUC__ >= 5)
#      define __constexpr constexpr
#    endif
#  else
#    error
#  endif
#else
#  error
#endif

#if !defined(__constexpr) && defined(__GNUC__) // Version?
#  define __constexpr __attribute__((__const__))
#endif

#if !defined(__constexpr)
#  define __constexpr
#endif

#pragma clang diagnostic pop
