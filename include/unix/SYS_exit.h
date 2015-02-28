#if defined(__linux__)
#  include "linux/SYS_exit.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SYS_exit.h"
#else
#  error
#endif
