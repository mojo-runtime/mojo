#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_fork 57
#  elif defined(__arm__)
#    define SYS_fork 2
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_fork 2
#else
#  error
#endif
