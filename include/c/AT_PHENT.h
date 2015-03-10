#ifndef AT_PHENT

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_PHENT 4
#else
#  error
#endif

#endif
