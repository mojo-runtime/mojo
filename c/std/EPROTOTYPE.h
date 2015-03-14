#ifndef EPROTOTYPE

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EPROTOTYPE 91
#  else
#    error
#  endif
#else
#  error
#endif

#endif
