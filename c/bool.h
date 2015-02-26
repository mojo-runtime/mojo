#if !defined(bool) && !defined(__cplusplus)
#  include "has/c/boolean_type.h"
#  if has_c_boolean_type
#    define bool _Bool
#  else
#    error
#  endif
#endif
