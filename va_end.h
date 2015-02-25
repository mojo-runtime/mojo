#ifndef va_end
#  include "compiler/has/builtin/va_end.h"
#  if compiler_has_builtin_va_end
#    define va_end __builtin_va_end
#  else
#    error
#  endif
#endif
