#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(NDEBUG)
#  if defined(__has_builtin)
#    define _has_builtin_unreachable __has_builtin(__builtin_unreachable)
#  elif defined(__GNUC__)
#    define _has_builtin_unreachable 1
#  else
#    error
#  endif
#  if _has_builtin_unreachable
#    define __unreachable(message) __builtin_unreachable()
#  else
#    error
#  endif
#  undef _has_builtin_unreachable
#else
#  include "__debug_error.h"
#  define __unreachable(message) __debug_error("unreachable", message, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#endif

#pragma clang diagnostic pop
