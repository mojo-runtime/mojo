#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getpid 39
#  elif defined(__arm__)
#    define SYS_getpid 20
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_getpid 20
#else
#  error
#endif
