#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(DEBUG)
#  define __todo() __builtin_unreachable()
#else
#  include "__debug_error.h"
#  define __todo() __debug_error("todo", __FILE__, __PRETTY_FUNCTION__, __LINE__, 0)
#endif

#pragma clang diagnostic pop
