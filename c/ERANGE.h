#ifndef ERANGE

#if defined(__linux__) || defined(__FreeBSD__)
#  define ERANGE 34
#else
#  error
#endif

#endif
