#ifndef _c_strlen_h_
#define _c_strlen_h_

#include "compat/__has_builtin.h"
#include "size_t.h"

#if __has_builtin(__builtin_strlen)
#  define strlen __builtin_strlen
#else
#  error
#endif

#endif
