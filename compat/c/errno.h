#if defined(__FreeBSD__)
#  include <freebsd/c/_errno.h>
#elif defined(__linux__)
#  include <linux/c/_errno.h>
#else
#  error
#endif
