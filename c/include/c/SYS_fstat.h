#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_fstat 5
#  elif defined(__arm__)
#    define SYS_fstat 108
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_fstat 189
#else
#  error
#endif
