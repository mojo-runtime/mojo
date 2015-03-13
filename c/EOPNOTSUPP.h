#ifndef EOPNOTSUPP

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EOPNOTSUPP 95
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EOPNOTSUPP 45
#else
#  error
#endif

#endif
