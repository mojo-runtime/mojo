#ifndef POLLOUT

#if defined(__linux__) || defined(__FreeBSD__)
#  define POLLOUT 0x4
#else
#  error
#endif

#endif
