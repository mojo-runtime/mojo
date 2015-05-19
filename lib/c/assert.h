#pragma once

#if defined(NDEBUG)
#  define assert(x)
#else
#  include "__cast.h"
#  include "__debug_error.h"
#  define assert(x)                                                     \
    ((x) ? __cast(void, 0) :                                            \
     __debug_error("assertion error", __FILE__, __PRETTY_FUNCTION__, __LINE__, message))
#endif
