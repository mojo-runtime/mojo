#ifndef EOWNERDEAD

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EOWNERDEAD 130
#  else
#    error
#  endif
#else
#  error
#endif

#endif
