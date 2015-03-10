#ifndef SIGHUP

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGHUP 1
#else
#  error
#endif

#endif
