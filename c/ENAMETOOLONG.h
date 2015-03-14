#ifndef ENAMETOOLONG

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENAMETOOLONG 36
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENAMETOOLONG 63
#else
#  error
#endif

#endif
