#ifndef c_builtin_constant_p_h_
#define c_builtin_constant_p_h_

#include "config/has_builtin_constant_p.h"

#if has_builtin_constant_p
#  define constant_p __builtin_constant_p
#else
#  error
#endif

#endif
