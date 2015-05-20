#pragma once

#if defined(__cplusplus)
#  if defined(__has_feature)
#    define __has_cxx_relaxed_constexpr __has_feature(cxx_relaxed_constexpr)
#  elif defined(__GNUC__)
#    define __has_cxx_relaxed_constexpr (__GNUC__ >= 5)
#  else
#    error
#  endif
#else
#  define __has_cxx_relaxed_constexpr 0
#endif

#if __has_cxx_relaxed_constexpr
#  define __constexpr constexpr
#else
#  define __constexpr
#endif
