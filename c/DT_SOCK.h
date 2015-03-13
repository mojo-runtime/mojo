#ifndef DT_SOCK

#if defined(__linux__) || defined(__FreeBSD__)
#  define DT_SOCK 12
#else
#  error
#endif

#endif
