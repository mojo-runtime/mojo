#ifndef va_start

#include "feature/has_builtin_va_start.h"

#if has_builtin_va_start
#  define va_start __builtin_va_start
#else
#  error
#endif

#endif
