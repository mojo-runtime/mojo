#ifndef _Bool

#if defined(__cplusplus)
#  pragma clang diagnostic push
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#  define _Bool bool
#  pragma clang diagnostic pop
#else
#  include "has_c_boolean_type.h"
#  if !has_c_boolean_type
#    error
#  endif
#endif

#endif
