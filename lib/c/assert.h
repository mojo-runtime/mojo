#pragma once

#if defined(NDEBUG)
#  define assert(x)
#else
#  include "debug/__debug_error.h"
#  include "__static_cast.h"
#  define assert(x)                                                     \
    ((x) ? __static_cast(void, 0) :                                     \
     __debug_error("assertion error", message, __FILE__, __PRETTY_FUNCTION__, __LINE__))
#endif
