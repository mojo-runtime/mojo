#ifndef c_alloca_h_
#define c_alloca_h_

#include "feature/has_builtin_alloca.h"

#if has_builtin_alloca
#  define alloca __builtin_alloca
#else
#  error
#endif

#endif
