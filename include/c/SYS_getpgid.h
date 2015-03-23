// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getpgid 121
#  elif defined(__arm__)
#    define SYS_getpgid 132
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_getpgid 207
#else
#  error
#endif
