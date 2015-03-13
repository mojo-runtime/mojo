#ifndef SIGSEGV

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGSEGV 11
#else
#  error
#endif

#endif
