#ifndef expect
#  include "compiler/has/builtin/expect.h"
#  if compiler_has_builtin_expect
#    define expect __builtin_expect
#  else
#    error
#  endif
#endif
