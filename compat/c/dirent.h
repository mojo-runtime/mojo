#if defined(__FreeBSD__)
#  include <freebsd/dirent/__all__.h>
#elif defined(__linux__)
#  include <linux/dirent/__all__.h>
#else
#  error
#endif
