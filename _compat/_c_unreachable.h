#ifndef _c_unreachable
#  include "compiler/has/builtin/unreachable.h"
#  if compiler_has_builtin_unreachable
#    define _c_unreachable __builtin_unreachable
#  else
#    error
#  endif
#endif
