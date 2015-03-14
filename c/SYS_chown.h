#ifndef SYS_chown

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_chown 92
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_chown 16
#else
#  error
#endif

#endif
