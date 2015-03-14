#ifndef EMSGSIZE

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EMSGSIZE 90
#  else
#    error
#  endif
#else
#  error
#endif

#endif
