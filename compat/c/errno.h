#if defined(__FreeBSD__)
#  include <freebsd/errno/__all__.h>
#elif defined(__linux__)
#  include <linux/errno/__all__.h>
#else
#  error
#endif
