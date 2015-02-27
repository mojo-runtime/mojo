#ifndef c_offsetof_h_
#define c_offsetof_h_

#include "config/has_builtin_offsetof.h"

#if has_builtin_offsetof
#  define offsetof __builtin_offsetof
#else
#  error
#endif

#endif
