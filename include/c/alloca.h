#pragma once

#include "size_t.h"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_alloca)
#    define alloca(size) __builtin_alloca(size)
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define alloca(size) __builtin_alloca(size)
#else
#  error
#endif
