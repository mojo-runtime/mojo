#ifndef va_list
#  include "compiler/has/builtin/va_list.h"
#  if compiler_has_builtin_va_list
#    define va_list __builtin_va_list
#  else
#    error
#  endif
#endif
