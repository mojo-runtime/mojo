#ifndef alloca

#include "feature/has_builtin_alloca.h"

#if has_builtin_alloca
#  define alloca __builtin_alloca
#else
#  error
#endif

#endif
