#ifndef EPERM

#if defined(__linux__) || defined(__FreeBSD__)
#  define EPERM 1
#else
#  error
#endif

#endif
