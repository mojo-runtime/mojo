#if defined(__linux__)
#  include "linux/SYS_getgid.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SYS_getgid.h"
#else
#  error
#endif
