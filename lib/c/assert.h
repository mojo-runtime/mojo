#pragma once

#if defined(NDEBUG)
#  define assert(x)
#else
#  include "debug/__debug_error.h"
#  include "config/__cast.h"
#  define assert(x)                                                     \
    ((x) ? __cast(void, 0) :                                            \
     __debug_error("assertion error", __FILE__, __PRETTY_FUNCTION__, __LINE__, message))
#endif
