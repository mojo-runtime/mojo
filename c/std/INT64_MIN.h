#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "INT64_MAX.h"
#  define INT64_MIN (-INT64_MAX - 1)
#else
#  error
#endif
