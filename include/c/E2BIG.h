#ifndef E2BIG

#if defined(__linux__) || defined(__FreeBSD__)
#  define E2BIG 7
#else
#  error
#endif

#endif
