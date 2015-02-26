#ifndef va_start
#  include "compiler/has/builtin/va_start.h"
#  if compiler_has_builtin_va_start
#    define va_start __builtin_va_start
#  else
#    error
#  endif
#endif
