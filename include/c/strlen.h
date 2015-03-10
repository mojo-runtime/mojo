#ifndef c_strlen_h_
#define c_strlen_h_

#include "config/has_builtin_strlen.h"
#include "size_t.h"

#if has_builtin_strlen
#  define strlen __builtin_strlen
#else
#  error
#endif

#endif
