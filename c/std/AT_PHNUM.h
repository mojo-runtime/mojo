#ifndef AT_PHNUM

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_PHNUM 5
#else
#  error
#endif

#endif
