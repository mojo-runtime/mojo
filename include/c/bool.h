#ifndef c_bool_h_
#define c_bool_h_

#if !defined(__cplusplus)
#  include "config/has_c_boolean_type.h"
#  if has_c_boolean_type
#    define bool _Bool
#  else
#    error
#  endif
#endif

#endif
