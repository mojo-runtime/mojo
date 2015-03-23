#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_set_thread_area 205
#  elif defined(__arm__)
#    define SYS_set_thread_area _Pragma("GCC error \"todo - removed?\"")
#  else
#    error
#  endif
#else
#  error
#endif
