#ifndef _c_memcmp_h_
#define _c_memcmp_h_

#include "compat/has_builtin_memcmp.h"

#if has_builtin_memcmp
#  define memcmp __builtin_memcmp
#else
#  error
#endif

#endif
