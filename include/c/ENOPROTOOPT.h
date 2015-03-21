// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ENOPROTOOPT 92
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOPROTOOPT 42
#else
#  error
#endif
