#ifndef ENETUNREACH

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENETUNREACH 101
#  else
#    error
#  endif
#else
#  error
#endif

#endif
