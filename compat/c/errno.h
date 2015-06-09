#if defined(__FreeBSD__)
#  include <freebsd/errno/@all.h>
#elif defined(__linux__)
#  include <linux/errno/@all.h>
#else
#  error
#endif
