#if defined(__FreeBSD__)
#  include <freebsd/wait/@all.h>
#elif defined(__linux__)
#  include <linux/wait/@all.h>
#else
#  error
#endif
