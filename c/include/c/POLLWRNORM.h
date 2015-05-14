#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define POLLWRNORM 0x100
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "POLLOUT.h"
#  define POLLWRNORM POLLOUT
#else
#  error
#endif
