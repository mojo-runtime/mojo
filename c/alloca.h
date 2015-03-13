#ifndef alloca

#include "compat/__has_builtin.h"

#if __has_builtin(__builtin_alloca)
#  define alloca __builtin_alloca
#else
#  error
#endif

#endif
