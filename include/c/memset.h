#ifndef _c_memset_h_
#define _c_memset_h_

#include "compat/has_builtin_memset.h"

#if has_builtin_memset
#  define memset __builtin_memset
#else
#  error
#endif

#endif
