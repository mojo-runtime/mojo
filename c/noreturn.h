#pragma once

#if !defined(__cplusplus)
#  include "compat/has_c_noreturn.h"
#  if has_c_noreturn
#    define noreturn _Noreturn
#  else
#    error
#  endif
#endif
