#ifndef _c_memcpy_h_
#define _c_memcpy_h_

#include "compat/has_builtin_memcpy.h"

#if has_builtin_memcpy
#  define memcpy __builtin_memcpy
#else
#  error
#endif

#endif
