// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_close 3
#  elif defined(__arm__)
#    define SYS_close 6
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_close 6
#else
#  error
#endif
