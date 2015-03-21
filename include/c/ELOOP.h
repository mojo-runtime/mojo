// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ELOOP 40
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ELOOP 62
#else
#  error
#endif
