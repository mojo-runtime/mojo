#ifndef constant_p
#  include "compiler/has/builtin/constant_p.h"
#  if compiler_has_builtin_constant_p
#    define constant_p __builtin_constant_p
#  else
#    error
#  endif
#endif
