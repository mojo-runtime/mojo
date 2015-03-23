// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_mkdir 83
#  elif defined(__arm__)
#    define SYS_mkdir 39
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_mkdir 136
#else
#  error
#endif
