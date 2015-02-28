#ifndef c_strcmp_h_
#define c_strcmp_h_

#include "feature/has_builtin_strcmp.h"

#if has_builtin_strcmp
#  define strcmp __builtin_strcmp
#else
#  error
#endif

#endif
