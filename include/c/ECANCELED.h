// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ECANCELED 125
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ECANCELED 85
#else
#  error
#endif
