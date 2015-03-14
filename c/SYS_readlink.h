#ifndef SYS_readlink

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_readlink 89
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_readlink 58
#else
#  error
#endif

#endif
