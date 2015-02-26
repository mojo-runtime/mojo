#if !defined(bool) && !defined(__cplusplus)
#  include "compiler/has/c/boolean_type.h"
#  if compiler_has_c_boolean_type
#    define bool _Bool
#  else
#    error
#  endif
#endif
