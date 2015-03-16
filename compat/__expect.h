#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__expect)
#  if defined(__has_builtin)
#    define __has_builtin_expect __has_builtin(__builtin_expect)
#  elif defined(__GNUC__)
#    define __has_builtin_expect (__GNUC__ >= 3)
#  else
#    error
#  endif
#  if __has_builtin_expect
#    define __expect __builtin_expect
#  endif
#  undef __has_builtin_expect
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__expect)
#  define __expect(x, y) (x)
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
