#ifndef SYS_getcwd

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getcwd 79
#  else
#    error
#  endif
#else
#  error
#endif

#endif
