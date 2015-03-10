#ifndef ESRCH

#if defined(__linux__) || defined(__FreeBSD__)
#  define ESRCH 3
#else
#  error
#endif

#endif
