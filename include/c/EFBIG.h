#ifndef EFBIG

#if defined(__linux__) || defined(__FreeBSD__)
#  define EFBIG 27
#else
#  error
#endif

#endif
