#ifndef SYS_clock_settime

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_clock_settime 227
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_clock_settime 233
#else
#  error
#endif

#endif
