#ifndef ECANCELED

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ECANCELED 125
#  else
#    error
#  endif
#else
#  error
#endif

#endif
