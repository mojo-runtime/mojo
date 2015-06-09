#if defined(__FreeBSD__)
#  include <freebsd/poll/__all__.h>
#elif defined(__linux__)
#  include <linux/poll/__all__.h>
#else
#  error
#endif
