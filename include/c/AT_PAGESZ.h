#ifndef AT_PAGESZ

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_PAGESZ 6
#else
#  error
#endif

#endif
