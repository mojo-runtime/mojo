#ifndef addressof
#  include "config/has_builtin_addressof.h"
#  if has_builtin_addressof
#    define addressof __builtin_addressof
#  else
#    error
#  endif
#endif
