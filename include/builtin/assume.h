#ifndef c_builtin_assume_h_
#define c_builtin_assume_h_

#include "feature/has_builtin_assume.h"

#if has_builtin_assume
#  define assume __builtin_assume
#else
#  define assume(x)
#endif

#endif
