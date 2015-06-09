#if defined(__arm__) || defined(__x86_64__) // generic (02000000)
#  define O_CLOEXEC 0x80000
#else
#  error
#endif
