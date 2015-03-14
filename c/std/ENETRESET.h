#ifndef ENETRESET

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENETRESET 102
#  else
#    error
#  endif
#else
#  error
#endif

#endif
