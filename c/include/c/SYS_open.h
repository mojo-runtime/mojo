#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_open 2
#  elif defined(__arm__)
#    define SYS_open 5
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_open 5
#else
#  error
#endif
