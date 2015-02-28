#ifndef c_va_copy_h_
#define c_va_copy_h_

#include "feature/has_builtin_va_copy.h"

#if has_builtin_va_copy
#  define va_copy __builtin_va_copy
#else
#  error
#endif

#endif
