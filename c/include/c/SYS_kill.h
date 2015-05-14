#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_kill 62
#  elif defined(__arm__)
#    define SYS_kill 37
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_kill 37
#else
#  error
#endif
