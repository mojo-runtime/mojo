#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "LONG_MAX.h"
#  define LONG_MIN (-LONG_MAX - 1L)
#else
#  error
#endif
