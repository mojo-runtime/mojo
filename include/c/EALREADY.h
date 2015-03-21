// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define EALREADY 114
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EALREADY 37
#else
#  error
#endif
