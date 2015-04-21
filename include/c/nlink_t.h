#pragma once

#if defined(__linux__)
#  if defined(__arm__)
typedef unsigned int nlink_t;
#  elif defined(__x86_64__)
typedef unsigned long nlink_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "uint16_t.h"
typedef uint16_t nlink_t;
#else
#  error
#endif
