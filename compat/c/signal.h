#if defined(__FreeBSD__)
#  include <freebsd/signal/__all__.h>
#elif defined(__linux__)
#  include <linux/signal/__all__.h>
#else
#  error
#endif
