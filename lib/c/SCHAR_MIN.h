#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "SCHAR_MAX.h"
#  define SCHAR_MIN (-SCHAR_MAX - 1)
#else
#  error
#endif
