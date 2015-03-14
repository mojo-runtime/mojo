#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_stat 4
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_stat 188
#else
#  error
#endif
