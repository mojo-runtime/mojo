#ifndef AT_SECURE

#if defined(__linux__)
#  define AT_SECURE 23
#else
#  error
#endif

#endif
