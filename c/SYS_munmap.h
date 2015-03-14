#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_munmap 11
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_munmap 73
#else
#  error
#endif
