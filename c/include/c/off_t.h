#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
typedef long off_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "int64_t.h"
typedef int64_t off_t;
#else
#  error
#endif
