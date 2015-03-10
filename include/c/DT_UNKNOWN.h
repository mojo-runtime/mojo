#ifndef DT_UNKNOWN

#if defined(__linux__) || defined(__FreeBSD__)
#  define DT_UNKNOWN 0
#else
#  error
#endif

#endif
