#ifndef EPROTONOSUPPORT

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EPROTONOSUPPORT 93
#  else
#    error
#  endif
#else
#  error
#endif

#endif
