#ifndef AT_EXECFD

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_EXECFD 2
#else
#  error
#endif

#endif
