#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_readlink 89
#  elif defined(__arm__)
#    define SYS_readlink 85
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_readlink 58
#else
#  error
#endif
