#ifndef AT_BASE

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_BASE 7
#else
#  error
#endif

#endif
