#ifndef va_arg
#  include "has/builtin/va_arg.h"
#  if has_builtin_va_arg
#    define va_arg __builtin_va_arg
#  else
#    error
#  endif
#endif
