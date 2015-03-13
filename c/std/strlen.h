#ifndef _c_strlen_h_
#define _c_strlen_h_

#include "size_t.h"
#include "../__has_builtin.h"

#if __has_builtin(__builtin_strlen)
#  define strlen __builtin_strlen
#else
#  error
#endif

#endif
