#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "SHRT_MAX.h"
#  define SHRT_MIN (-INT_MAX - 1)
#else
#  error
#endif
