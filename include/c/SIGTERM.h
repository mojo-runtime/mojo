#if defined(__linux__)
#  include "linux/SIGTERM.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SIGTERM.h"
#else
#  error
#endif
