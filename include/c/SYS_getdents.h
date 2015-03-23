// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getdents 78 // __NR_getdents
#  elif defined(__arm__)
#    define SYS_getdents 141 // __NR_getdents
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_getdents 272
#else
#  error
#endif
