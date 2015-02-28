#if defined(__linux__)
#  include "linux/SYS_getppid.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SYS_getppid.h"
#else
#  error
#endif
