// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_dup2 33
#  elif defined(__arm__)
#    define SYS_dup2 63
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_dup2 90
#else
#  error
#endif
