#ifndef SIGALRM

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGALRM 14
#else
#  error
#endif

#endif
