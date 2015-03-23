#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_clock_nanosleep 230
#  elif defined(__arm__)
#    define SYS_clock_nanosleep 265
#  else
#    error
#  endif
#else
#  error
#endif
