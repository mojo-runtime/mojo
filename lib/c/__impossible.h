#pragma once

#if defined(DEBUG)
#  include "__debug_error.h"
#  define __impossible(message) __debug_error("unreachable", __FILE__, __PRETTY_FUNCTION__, __LINE__, message)
#else
#  include "__unreachable.h"
#  define __impossible(message) __unreachable()
#endif