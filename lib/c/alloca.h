#pragma once

#include "size_t.h"

#if defined(__has_builtin)
#  define __has_builtin_alloca __has_builtin(__builtin_alloca)
#elif defined(__GNUC__)
#  define __has_builtin_alloca 1 // Version?
#else
#  error
#endif

#if __has_builtin_alloca
#  define alloca(size) __builtin_alloca(size)
#else
#  error
#endif
