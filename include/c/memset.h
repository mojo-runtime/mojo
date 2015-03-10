#ifndef c_memset_h_
#define c_memset_h_

#include "config/has_builtin_memset.h"

#if has_builtin_memset
#  define memset __builtin_memset
#else
#  error
#endif

#endif
