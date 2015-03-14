#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_pipe2 293
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_pipe2 542
#else
#  error
#endif
