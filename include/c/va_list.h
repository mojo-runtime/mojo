#ifndef va_list

#include "config/has_builtin_va_list.h"

#if has_builtin_va_list
#  define va_list __builtin_va_list
#else
#  error
#endif

#endif
