#ifndef _c_strcmp_h_
#define _c_strcmp_h_

#include "config/has_builtin_strcmp.h"

#if has_builtin_strcmp
#  define strcmp __builtin_strcmp
#else
#  error
#endif

#endif
