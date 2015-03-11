#ifndef __builtin_addressof

#include "has_builtin_addressof.h"

#if !has_builtin_addressof
#  if !defined(__cplusplus)
#    define __builtin_addressof(x) (&(x))
#  else
#    error
#  endif
#endif

#endif
