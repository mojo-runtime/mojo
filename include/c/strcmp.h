#ifndef _c_strcmp_h_
#define _c_strcmp_h_

#include "compat/__has_builtin.h"

#if __has_builtin(__builtin_strcmp)
#  define strcmp __builtin_strcmp
#else
#  error
#endif

#endif
