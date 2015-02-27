#ifndef c_alignof_h_
#define c_alignof_h_

#if !defined(__cplusplus)
#  include "has/c/alignof.h"
#  if has_c_alignof
#    define alignof _Alignof
#  else
#    error
#  endif
#else
#  include "config/has_cxx_alignof.h"
#  if !has_cxx_alignof
#    error
#  endif
#endif

#endif
