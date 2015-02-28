#if defined(__linux__)
#  include "linux/SYS_geteuid.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SYS_geteuid.h"
#else
#  error
#endif
