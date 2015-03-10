#ifndef EXDEV

#if defined(__linux__) || defined(__FreeBSD__)
#  define EXDEV 18
#else
#  error
#endif

#endif
