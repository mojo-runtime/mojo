#if defined(__FreeBSD__)
#  include <freebsd/_errno.h>
#elif defined(__linux__)
#  include <linux/_errno.h>
#else
#  error
#endif
