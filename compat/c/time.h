#if defined(__FreeBSD__)
#  include <freebsd/time/__all__.h>
#elif defined(__linux__)
#  include <linux/time/__all__.h>
#else
#  error
#endif
