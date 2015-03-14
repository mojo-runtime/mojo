#ifndef ENOMSG

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOMSG 42
#  else
#    error
#  endif
#else
#  error
#endif

#endif
