#ifndef addressof
#  include "has/builtin/addressof.h"
#  if has_builtin_addressof
#    define addressof __builtin_addressof
#  else
#    error
#  endif
#endif
