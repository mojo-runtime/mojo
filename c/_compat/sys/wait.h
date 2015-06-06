#if defined(__FreeBSD__)
#  include <freebsd/_wait.h>
#elif defined(__linux__)
#  include <linux/_wait.h>
#else
#  error
#endif
