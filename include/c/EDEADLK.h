// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define EDEADLK 35
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EDEADLK 11
#else
#  error
#endif
