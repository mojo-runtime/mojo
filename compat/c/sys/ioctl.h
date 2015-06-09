#if defined(__FreeBSD__)
#  include <freebsd/ioctl/@all.h>
#elif defined(__linux__)
#  include <linux/ioctl/@all.h>
#else
#  error
#endif
