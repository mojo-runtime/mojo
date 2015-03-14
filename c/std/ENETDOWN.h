#ifndef ENETDOWN

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENETDOWN 100
#  else
#    error
#  endif
#else
#  error
#endif

#endif
