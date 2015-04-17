#pragma once

#if !defined(__cplusplus)
#  include "compat/__has_feature.h"
#  if __has_feature(c_noreturn)
#    define noreturn _Noreturn
#  else
#    error
#  endif
#endif
