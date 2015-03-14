#ifndef EADDRINUSE

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EADDRINUSE 98
#  else
#    error
#  endif
#else
#  error
#endif

#endif
