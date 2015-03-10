#ifndef _Noreturn

#if defined(__cplusplus)
#  include "config/has_attribute_noreturn.h"
#  if has_attribute_noreturn
#    define _Noreturn __attribute__((__noreturn__))
#  else
#    error
#  endif
#else
#  include "config/has_c_noreturn.h"
#  if !has_c_noreturn
#    error
#  endif
#endif

#endif
