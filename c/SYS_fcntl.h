#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_fcntl 72
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_fcntl 92
#else
#  error
#endif
