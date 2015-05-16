#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(NDEBUG)
#  define __todo(message) __builtin_unreachable()
#else
#  include "__debug_error.h"
#  define __todo(message) __debug_error("todo", message, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#endif

#pragma clang diagnostic pop
