// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_fstat 5
#  elif defined(__arm__)
#    define SYS_fstat _Pragma("GCC error \"todo - __NR_fstat64?\"")
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_fstat 189
#else
#  error
#endif
