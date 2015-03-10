#ifndef alignas

#if !defined(__cplusplus)
#  include "config/has_c_alignas.h"
#  if has_c_alignas
#    define alignas _Alignas
#  else
#    error
#  endif
#else
#  include "config/has_cxx_alignas.h"
#  if !has_cxx_alignas
#    error
#  endif
#endif

#endif
