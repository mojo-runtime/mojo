#if defined(__FreeBSD__)
#  include <freebsd/_fcntl.h>
#elif defined(__linux__)
#  include <linux/_fcntl.h>
#else
#  error
#endif
