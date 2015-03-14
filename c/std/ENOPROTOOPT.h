#ifndef ENOPROTOOPT

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOPROTOOPT 92
#  else
#    error
#  endif
#else
#  error
#endif

#endif
