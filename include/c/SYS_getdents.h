#ifndef SYS_getdents

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getdents 78
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_getdents 272
#else
#  error
#endif

#endif
