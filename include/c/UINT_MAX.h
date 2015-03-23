#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "UINT32_MAX.h"
#  define UINT_MAX UINT32_MAX
#else
#  error
#endif
