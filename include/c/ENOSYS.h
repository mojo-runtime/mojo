// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ENOSYS 38
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOSYS 78
#else
#  error
#endif
