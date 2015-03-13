#ifndef F_DUPFD

#if defined(__linux__) || defined(__FreeBSD__)
#  define F_DUPFD 0
#else
#  error
#endif

#endif
