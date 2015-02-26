#ifndef addressof
#  include "compiler/has/builtin/addressof.h"
#  if compiler_has_builtin_addressof
#    define addressof __builtin_addressof
#  else
#    error
#  endif
#endif
