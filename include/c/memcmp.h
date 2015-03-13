#ifndef _c_memcmp_h_
#define _c_memcmp_h_

#include "compat/__has_builtin.h"

#if __has_builtin(__builtin_memcmp)
#  define memcmp __builtin_memcmp
#else
#  error
#endif

#endif
