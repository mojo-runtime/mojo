#ifndef ENOTRECOVERABLE

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOTRECOVERABLE 131
#  else
#    error
#  endif
#else
#  error
#endif

#endif
