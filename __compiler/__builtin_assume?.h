#ifndef __builtin_assume
#  include "c/__compiler/__has_builtin?.h"
#  if !__has_builtin(__builtin_assume)
#    define __builtin_assume(x) ()
#  endif
#endif
