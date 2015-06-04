#if defined(__arm__) || defined(__x86_64__) // generic
#  define SIGCHLD 17
#else
#  error
#endif
