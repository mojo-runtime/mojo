#ifndef offsetof

#include "feature/has_builtin_offsetof.h"

#if has_builtin_offsetof
#  define offsetof __builtin_offsetof
#else
#  error
#endif

#endif
