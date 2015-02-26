#ifndef va_copy
#  include "compiler/has/builtin/va_copy.h"
#  if compiler_has_builtin_va_copy
#    define va_copy __builtin_va_copy
#  else
#    error
#  endif
#endif
