#ifndef EPOLLET

#if defined(__linux__)
#  define EPOLLET (1 << 31)
#else
#  error
#endif

#endif
