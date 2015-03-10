#ifndef c_memcpy_h_
#define c_memcpy_h_

#include "config/has_builtin_memcpy.h"

#if has_builtin_memcpy
#  define memcpy __builtin_memcpy
#else
#  error
#endif

#endif
