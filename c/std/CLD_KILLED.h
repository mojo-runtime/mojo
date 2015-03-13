#ifndef CLD_KILLED

#if defined(__linux__) || defined(__FreeBSD__)
#  define CLD_KILLED 2
#else
#  error
#endif

#endif
