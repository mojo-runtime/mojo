#ifndef AT_HWCAP

#if defined(__linux__)
#  define AT_HWCAP 16
#else
#  error
#endif

#endif
