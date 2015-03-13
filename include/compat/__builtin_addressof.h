#ifndef __builtin_addressof

#include "__has_builtin.h"

#if !__has_builtin(__builtin_addressof)
#  if !defined(__cplusplus)
#    define __builtin_addressof(x) (&(x))
#  else
#    error
#  endif
#endif

#endif
