#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "INT_LEAST8_MAX.h"
#  define INT_LEAST8_MIN (-INT_LEAST8_MAX - 1)
#else
#  error
#endif
