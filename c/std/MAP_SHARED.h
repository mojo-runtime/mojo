#ifndef MAP_SHARED

#if defined(__linux__) || defined(__FreeBSD__)
#  define MAP_SHARED 0x1
#else
#  error
#endif

#endif
