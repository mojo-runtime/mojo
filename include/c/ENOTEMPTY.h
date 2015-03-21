// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ENOTEMPTY 39
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOTEMPTY 66
#else
#  error
#endif
