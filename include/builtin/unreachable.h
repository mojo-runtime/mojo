#ifndef c_builtin_unreachable_h_
#define c_builtin_unreachable_h_

#include "config/has_builtin_unreachable.h"

#if has_builtin_unreachable
#  define unreachable __builtin_unreachable
#else
#  error
#endif

#endif
