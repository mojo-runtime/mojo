// -*- C -*-

#pragma once

#include "size_t.h"

static inline
size_t
strlen(const char* s)
{
#if defined(__has_builtin)
#  if __has_builtin(__builtin_strlen)
    return __builtin_strlen(s);
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
    return __builtin_strlen(s);
#else
#  error
#endif
}
