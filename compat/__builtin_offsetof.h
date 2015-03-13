#ifndef __builtin_offsetof

#include "__has_builtin.h"

#if !__has_builtin(__builtin_offsetof)
#  if !defined(__clang__) // Workaround: false negative (3.6.0)
#    error
#  endif
#endif

#endif
