#if defined(__FreeBSD__)
#  include <freebsd/_mman.h>
#elif defined(__linux__)
#  include <linux/_mman.h>
#else
#  error
#endif
