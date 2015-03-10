#ifndef _c_noreturn_h_
#define _c_noreturn_h_

#if !defined(__cplusplus)
#  include "config/has_c_noreturn.h"
#  if has_c_noreturn
#    define noreturn _Noreturn
#  else
#    error
#  endif
#endif

#endif
