#if defined(__FreeBSD__)
#  include <freebsd/stat/__all__.h>
#elif defined(__linux__)
#  include <linux/stat/__all__.h>
#else
#  error
#endif
