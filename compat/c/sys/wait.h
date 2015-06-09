#if defined(__FreeBSD__)
#  include <freebsd/wait/__all__.h>
#elif defined(__linux__)
#  include <linux/wait/__all__.h>
#else
#  error
#endif
