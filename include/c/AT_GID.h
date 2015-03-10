#ifndef AT_GID

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_GID 13
#else
#  error
#endif

#endif
