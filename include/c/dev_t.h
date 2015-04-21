#pragma once

#if defined(__linux__)
#  if defined(__arm__)
#    if defined(__ARMEB__)
typedef unsigned short dev_t;
#    else
typedef unsigned long dev_t;
#    endif
#  elif defined(__x86_64__)
typedef unsigned long dev_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "uint32_t.h"
typedef uint32_t dev_t;
#else
#  error
#endif
