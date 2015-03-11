#ifndef va_copy

#include "compat/has_builtin_va_copy.h"

#if has_builtin_va_copy
#  define va_copy __builtin_va_copy
#else
#  error
#endif

#endif
