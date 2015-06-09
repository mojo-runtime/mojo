#pragma once

#if defined(DEBUG)
#  include "__debug_error.h"
#  define __unreachable(message) __debug_error("unreachable", __FILE__, __PRETTY_FUNCTION__, __LINE__, message)
#else
#  include <feature/__has_builtin_unreachable.h>
#  if __has_builtin_unreachable
#    define __unreachable(message) __builtin_unreachable()
#  else
#    error
#  endif
#endif
