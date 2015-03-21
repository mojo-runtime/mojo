// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getpgid 121
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_getpgid 207
#else
#  error
#endif
