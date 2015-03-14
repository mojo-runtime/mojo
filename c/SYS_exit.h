#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_exit 60
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_exit 1
#else
#  error
#endif
