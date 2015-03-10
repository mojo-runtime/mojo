#ifndef ECHILD

#if defined(__linux__) || defined(__FreeBSD__)
#  define ECHILD 10
#else
#  error
#endif

#endif
