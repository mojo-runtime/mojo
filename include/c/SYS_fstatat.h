// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_fstatat 262
#  elif defined(__arm__)
#    define SYS_fstatat _Pragma("GCC error \"todo - __NR_fstatat64?\"")
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_fstatat 493
#else
#  error
#endif
