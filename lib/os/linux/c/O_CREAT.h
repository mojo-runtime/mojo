#if defined(__arm__) || defined(__x86_64__) // generic (0100)
#  define O_CREAT 0x40
#else
#  error
#endif
