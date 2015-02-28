#if defined(__linux__)
#  include "linux/SIGFPE.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SIGFPE.h"
#else
#  error
#endif
