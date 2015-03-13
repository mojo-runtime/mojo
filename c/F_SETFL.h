#ifndef F_SETFL

#if defined(__linux__) || defined(__FreeBSD__)
#  define F_SETFL 4
#else
#  error
#endif

#endif
