#if defined(__linux__)
#  include "linux/SYS_write.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SYS_write.h"
#else
#  error
#endif
