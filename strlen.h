#ifndef c_strlen_h_
#define c_strlen_h_

#include "size_t.h"

#if !defined(has_builtin_strlen)
#  if defined(__has_builtin)
#    define has_builtin_strlen __has_builtin(__builtin_strlen)
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_strlen 1
#  else
#    error
#  endif
#endif

#if has_builtin_strlen
#  define strlen __builtin_strlen
#else
#  error
#endif

#endif
