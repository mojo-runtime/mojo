#ifndef _c_memcpy_h_
#define _c_memcpy_h_

#include "../__has_builtin.h"

#if __has_builtin(__builtin_memcpy)
#  define memcpy __builtin_memcpy
#else
#  error
#endif

#endif
