#pragma once

#if defined(NDEBUG)
#  define assert(x)
#else
#  include "__debug_error.h"
#  include "__old_style_cast.h"
#  define assert(x)                                                     \
    ((x) ? __old_style_cast(void, 0) :                                  \
     __debug_error("assertion error", __FILE__, __PRETTY_FUNCTION__, __LINE__, message))
#endif
