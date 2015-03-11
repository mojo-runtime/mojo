#ifndef _c_noreturn

#if defined(__cplusplus)
#  include "compat/has_attribute_noreturn.h"
#  if has_attribute_noreturn
#    define _c_noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#else
#  include "compat/has_c_noreturn.h"
#  if has_c_noreturn
#    define _c_noreturn _Noreturn
#  else
#    error
#  endif
#endif

#endif
