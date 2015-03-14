#ifndef ENOLINK

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOLINK 67
#  else
#    error
#  endif
#else
#  error
#endif

#endif
