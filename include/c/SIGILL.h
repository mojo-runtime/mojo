#if defined(__linux__)
#  include "linux/SIGILL.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SIGILL.h"
#else
#  error
#endif
