#ifndef c_va_list_h_
#define c_va_list_h_

#include "feature/has_builtin_va_list.h"

#if has_builtin_va_list
#  define va_list __builtin_va_list
#else
#  error
#endif

#endif
