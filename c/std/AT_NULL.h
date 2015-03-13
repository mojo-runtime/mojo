#ifndef AT_NULL

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_NULL 0
#else
#  error
#endif

#endif
