#ifndef SYS_getpid

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getpid 39
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_getpid 20
#else
#  error
#endif

#endif
