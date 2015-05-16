#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_execve 59
#  elif defined(__arm__)
#    define SYS_execve 11
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_execve 59
#else
#  error
#endif
