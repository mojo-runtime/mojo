#ifndef EBADMSG

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EBADMSG 74
#  else
#    error
#  endif
#else
#  error
#endif

#endif
