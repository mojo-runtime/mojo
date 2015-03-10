#ifndef EFAULT

#if defined(__linux__) || defined(__FreeBSD__)
#  define EFAULT 14
#else
#  error
#endif

#endif
