// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getdents64 217
#  elif defined(__arm__)
#    define SYS_getdents64 217
#  else
#    error
#  endif
#else
#  error
#endif
