#ifndef CLD_TRAPPED

#if defined(__linux__) || defined(__FreeBSD__)
#  define CLD_TRAPPED 4
#else
#  error
#endif

#endif
