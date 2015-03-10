#ifndef EBADF

#if defined(__linux__) || defined(__FreeBSD__)
#  define EBADF 9
#else
#  error
#endif

#endif
