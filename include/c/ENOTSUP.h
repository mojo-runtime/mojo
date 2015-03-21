// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOTSUP 524 // ENOTSUPP
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "EOPNOTSUPP.h"
#  define ENOTSUP EOPNOTSUPP
#else
#  error
#endif
