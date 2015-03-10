#ifndef AT_PHDR

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_PHDR 3
#else
#  error
#endif

#endif
