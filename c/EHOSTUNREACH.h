#ifndef EHOSTUNREACH

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EHOSTUNREACH 113
#  else
#    error
#  endif
#else
#  error
#endif

#endif
