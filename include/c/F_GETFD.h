#ifndef F_GETFD

#if defined(__linux__) || defined(__FreeBSD__)
#  define F_GETFD 1
#else
#  error
#endif

#endif
