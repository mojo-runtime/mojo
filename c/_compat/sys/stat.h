#if defined(__FreeBSD__)
#  include <freebsd/_stat.h>
#elif defined(__linux__)
#  include <linux/_stat.h>
#else
#  error
#endif
