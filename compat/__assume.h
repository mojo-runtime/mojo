#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__assume)
#  if defined(__has_builtin)
#    define __has_builtin_assume __has_builtin(__builtin_assume)
#  else
#    define __has_builtin_assume 0
#  endif
#  if __has_builtin_assume
#    define __assume(x) __builtin_assume(x)
#  endif
#  undef __has_builtin_assume
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__assume)
#  define __assume(x)
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
