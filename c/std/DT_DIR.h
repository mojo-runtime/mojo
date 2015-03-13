#ifndef DT_DIR

#if defined(__linux__) || defined(__FreeBSD__)
#  define DT_DIR 4
#else
#  error
#endif

#endif
