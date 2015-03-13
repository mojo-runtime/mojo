#ifndef DT_LNK

#if defined(__linux__) || defined(__FreeBSD__)
#  define DT_LNK 10
#else
#  error
#endif

#endif
