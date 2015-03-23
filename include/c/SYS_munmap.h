// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_munmap 11
#  elif defined(__arm__)
#    define SYS_munmap 91
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_munmap 73
#else
#  error
#endif
