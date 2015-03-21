// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_execve 59
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_execve 59
#else
#  error
#endif
