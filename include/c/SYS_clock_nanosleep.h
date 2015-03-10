#ifndef SYS_clock_nanosleep

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_clock_nanosleep 230
#  else
#    error
#  endif
#else
#  error
#endif

#endif
