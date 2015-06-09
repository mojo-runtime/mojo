#if defined(__alpha__) || defined(__powerpc__)
#  error
#elif defined(__hppa__)
#  error
#elif defined(__mips__)
#  error
#elif defined(__sparc__)
#  error
#else
#  define TCGETS 0x5401
#endif
