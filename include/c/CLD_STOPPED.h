#ifndef CLD_STOPPED

#if defined(__linux__) || defined(__FreeBSD__)
#  define CLD_STOPPED 5
#else
#  error
#endif

#endif
