// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define EMSGSIZE 90
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EMSGSIZE 40
#else
#  error
#endif
