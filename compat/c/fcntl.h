#if defined(__FreeBSD__)
#  include <freebsd/fcntl/__all__.h>
#elif defined(__linux__)
#  include <linux/fcntl/__all__.h>
#else
#  error
#endif
