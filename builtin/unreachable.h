#ifndef unreachable
#  include "config/has_builtin_unreachable.h"
#  if has_builtin_unreachable
#    define unreachable __builtin_unreachable
#  else
#    error
#  endif
#endif
