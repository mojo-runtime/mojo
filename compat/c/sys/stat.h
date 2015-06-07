#if defined(__FreeBSD__)
#  include <freebsd/c/_stat.h>
#elif defined(__linux__)
#  include <linux/c/_stat.h>
#else
#  error
#endif
