#ifndef _c_strlen_h_
#define _c_strlen_h_

#include "compat/has_builtin_strlen.h"
#include "size_t.h"

#if has_builtin_strlen
#  define strlen __builtin_strlen
#else
#  error
#endif

#endif
