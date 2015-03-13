#ifndef F_SETLK

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define F_SETLK 6
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define F_SETLK 12
#else
#  error
#endif

#endif
