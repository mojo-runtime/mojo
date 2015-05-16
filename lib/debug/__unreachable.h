#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(NDEBUG)
#  include "config/__has_builtin_unreachable.h"
#  if __has_builtin_unreachable
#    define __unreachable(message) __builtin_unreachable()
#  else
#    error
#  endif
#else
#  include "__debug_error.h"
#  define __unreachable(message) __debug_error("unreachable", message, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#endif

#pragma clang diagnostic pop
