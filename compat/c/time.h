#if defined(__FreeBSD__)
#  include <freebsd/time/@all.h>
#elif defined(__linux__)
#  include <linux/time/@all.h>
#else
#  error
#endif
