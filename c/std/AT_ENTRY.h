#ifndef AT_ENTRY

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_ENTRY 9
#else
#  error
#endif

#endif
