#if defined(__alpha__) || defined(__powerpc__)
#  error
#elif defined(__hppa__)
#  error
#elif defined(__mips__)
#  error
#elif defined(__sparc__)
#  error
#else
#  define TCSETSW 0x5403
#endif
