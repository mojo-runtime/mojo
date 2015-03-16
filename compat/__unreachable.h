#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__unreachable)
#  if defined(__has_builtin)
#    define __has_builtin_unreachable __has_builtin(__builtin_unreachable)
#  elif defined(__GNUC__) // Version?
#    define __has_builtin_unreachable 1
#  else
#    error
#  endif
#  if __has_builtin_unreachable
#    define __unreachable __builtin_unreachable
#  endif
#  undef __has_builtin_unreachable
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__unreachable)
#  error
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop

