#pragma once

#if !defined(__cplusplus)
#  include <feature/__has_c_noreturn.h>
#  if __has_c_noreturn
#    define noreturn _Noreturn
#  else
#    error
#  endif
#endif
