#ifndef SIGTRAP

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGTRAP 5
#else
#  error
#endif

#endif
