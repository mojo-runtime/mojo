#ifndef SYS_write

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_write 1
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_write 4
#else
#  error
#endif

#endif
