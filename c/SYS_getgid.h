#ifndef SYS_getgid

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getgid 104
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_getgid 47
#else
#  error
#endif

#endif
