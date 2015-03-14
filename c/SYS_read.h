#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_read 0
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_read 3
#else
#  error
#endif
