#ifndef EPROTO

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EPROTO 71
#  else
#    error
#  endif
#else
#  error
#endif

#endif
