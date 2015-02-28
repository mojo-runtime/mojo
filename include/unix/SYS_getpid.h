#if defined(__linux__)
#  include "linux/SYS_getpid.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SYS_getpid.h"
#else
#  error
#endif
