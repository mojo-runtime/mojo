#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "UINT16_MAX.h"
#  define USHRT_MAX UINT16_MAX
#else
#  error
#endif
