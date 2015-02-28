#if defined(__linux__)
#  include "linux/SYS_getegid.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SYS_getegid.h"
#else
#  error
#endif
