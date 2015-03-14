#ifndef POLLERR

#if defined(__linux__) || defined(__FreeBSD__)
#  define POLLERR 0x8
#else
#  error
#endif

#endif
