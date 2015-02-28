#if defined(__linux__)
#  include "linux/SIGINT.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SIGINT.h"
#else
#  error
#endif
