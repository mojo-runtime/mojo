// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define EOWNERDEAD 130
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EOWNERDEAD 96
#else
#  error
#endif
