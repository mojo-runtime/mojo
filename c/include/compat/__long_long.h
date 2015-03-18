#pragma once

#if defined(__cplusplus)
#  include "__has_cxx.h"
#  if __has_cxx(11)
typedef long long __long_long;
#  else
#    error
#  endif
#else
#  include "__has_c.h"
#  if __has_c(99)
typedef long long __long_long;
#  else
#    error
#  endif
#endif
