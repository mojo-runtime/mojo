#pragma once

#include "size_t.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  define __has_builtin_alloca __has_builtin(__builtin_alloca)
#elif defined(__GNUC__)
#  define __has_builtin_alloca 1 // Version?
#else
#  error
#endif

#pragma clang diagnostic pop

#if __has_builtin_alloca
#  define alloca(size) __builtin_alloca(size)
#else
#  error
#endif
