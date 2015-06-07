#if defined(__FreeBSD__)
#  include <freebsd/c/_mman.h>
#elif defined(__linux__)
#  include <linux/c/_mman.h>
#else
#  error
#endif
