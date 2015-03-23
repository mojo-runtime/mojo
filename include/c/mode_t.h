#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
typedef unsigned int mode_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "uint16_t.h"
typedef uint16_t mode_t;
#else
#  error
#endif
