#ifndef O_RDWR

#if defined(__linux__) || defined(__FreeBSD__)
#  define O_RDWR 0x2
#else
#  error
#endif

#endif
