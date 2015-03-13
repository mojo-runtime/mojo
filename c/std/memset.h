#ifndef _c_memset_h_
#define _c_memset_h_

#include "compat/__has_builtin.h"

#if __has_builtin(__builtin_memset)
#  define memset __builtin_memset
#else
#  error
#endif

#endif
