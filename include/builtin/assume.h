#ifndef assume

#include "feature/has_builtin_assume.h"

#if has_builtin_assume
#  define assume __builtin_assume
#else
#  define assume(x)
#endif

#endif
