#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "UINT64_MAX.h"
#  define ULLONG_MAX UINT64_MAX
#else
#  error
#endif
