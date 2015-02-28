#if defined(__linux__)
#  include "linux/SYS_getuid.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SYS_getuid.h"
#else
#  error
#endif
