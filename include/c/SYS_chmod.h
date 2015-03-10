#ifndef SYS_chmod

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_chmod 90
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_chmod 15
#else
#  error
#endif

#endif
