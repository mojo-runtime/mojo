// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_clock_getres 229
#  elif defined(__arm__)
#    define SYS_clock_getres 264
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_clock_getres 234
#else
#  error
#endif
