#ifndef x_noreturn

#if defined(__cplusplus)
#  include "has_cpp_attribute_noreturn.h"
#  if has_cpp_attribute_noreturn
#    define x_noreturn [[noreturn]]
#  else
#    error
#  endif
#else
#  include "has_c_noreturn.h"
#  if has_c_noreturn
#    define x_noreturn _Noreturn
#  else
#    error
#  endif
#endif

#endif
