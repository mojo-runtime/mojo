#ifndef c_va_end_h_
#define c_va_end_h_

#include "config/has_builtin_va_end.h"

#if has_builtin_va_end
#  define va_end __builtin_va_end
#else
#  error
#endif

#endif
