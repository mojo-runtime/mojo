#if defined(__arm__) || defined(__x86_64__) // generic
#  define POLLWRBAND 0x200
#else
#  error
#endif
