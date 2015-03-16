#pragma once

#if defined(__cplusplus)
#  include "config/__has_cxx11.h"
#  if __has_cxx11
typedef long long __long_long;
#  else
#    error
#  endif
#else
#  include "config/__has_c99.h"
#  if __has_c99
typedef long long __long_long;
#  else
#    error
#  endif
#endif
