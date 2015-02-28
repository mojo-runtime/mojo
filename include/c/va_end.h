#ifndef va_end

#include "feature/has_builtin_va_end.h"

#if has_builtin_va_end
#  define va_end __builtin_va_end
#else
#  error
#endif

#endif
