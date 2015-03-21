// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ENOSR 63
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOSR _Pragma("GCC error\"Strictly speaking, they don't have one\"")
#else
#  error
#endif
