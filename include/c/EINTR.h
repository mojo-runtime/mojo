#ifndef EINTR

#if defined(__linux__) || defined(__FreeBSD__)
#  define EINTR 4
#else
#  error
#endif

#endif
