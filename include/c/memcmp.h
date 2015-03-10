#ifndef c_memcmp_h_
#define c_memcmp_h_

#include "config/has_builtin_memcmp.h"

#if has_builtin_memcmp
#  define memcmp __builtin_memcmp
#else
#  error
#endif

#endif
