// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_get_thread_area 211
#  elif defined(__arm__)
#    define SYS_get_thread_area _Pragma("GCC error \"todo - removed?\"")
#  else
#    error
#  endif
#else
#  error
#endif
