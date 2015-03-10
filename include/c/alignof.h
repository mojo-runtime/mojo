#ifndef alignof

#if !defined(__cplusplus)
#  include "config/has_c_alignof.h"
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
