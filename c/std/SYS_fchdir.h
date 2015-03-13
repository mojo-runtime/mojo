#ifndef SYS_fchdir

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_fchdir 81
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_fchdir 13
#else
#  error
#endif

#endif
