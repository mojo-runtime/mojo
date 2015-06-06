#if defined(__arm__) || defined(__x86_64__) // generic
#  define POLLWRNORM 0x100
#else
#  error
#endif
