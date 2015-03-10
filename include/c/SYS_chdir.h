#ifndef SYS_chdir

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_chdir 80
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_chdir 12
#else
#  error
#endif

#endif
