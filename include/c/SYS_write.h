// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_write 1
#  elif defined(__arm__)
#    define SYS_write 4
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_write 4
#else
#  error
#endif
