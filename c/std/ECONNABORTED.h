#ifndef ECONNABORTED

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ECONNABORTED 103
#  else
#    error
#  endif
#else
#  error
#endif

#endif
