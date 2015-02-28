#ifndef constant_p

#include "feature/has_builtin_constant_p.h"

#if has_builtin_constant_p
#  define constant_p __builtin_constant_p
#else
#  error
#endif

#endif
