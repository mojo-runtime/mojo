#ifndef SYS_kill

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_kill 62
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_kill 37
#else
#  error
#endif

#endif
