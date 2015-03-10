#ifndef CLD_CONTINUED

#if defined(__linux__) || defined(__FreeBSD__)
#  define CLD_CONTINUED 6
#else
#  error
#endif

#endif
