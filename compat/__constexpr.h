#pragma once // C++14's "relaxed" constexpr

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__constexpr)
#  if defined(__has_feature)
#    define __has_relaxed_constexpr __has_feature(cxx_relaxed_constexpr)
#  elif defined(__GNUC__)
#    define __has_relaxed_constexpr (__GNUC__ >= 5)
#  else
#    error
#  endif
#  if __has_relaxed_constexpr
#    define __constexpr constexpr
#  endif
#  undef __has_relaxed_constexpr
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__constexpr)
#  if defined(__has_attribute)
#    define __has_attribute_const __has_attribute(__const__)
#  elif defined(__GNUC__) // Version?
#    define __has_attribute_const 1
#  else
#    error
#  endif
#  if __has_attribute_const
#    define __constexpr __attribute__((__const__))
#  endif
#  undef __has_attribute_const
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__constexpr)
#  define __constexpr
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
