#ifndef offsetof
#  include "compiler/has/builtin/offsetof.h"
#  if compiler_has_builtin_offsetof
#    define offsetof __builtin_offsetof
#  else
#    error
#  endif
#endif
