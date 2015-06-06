#if defined(__FreeBSD__)
#  include <freebsd/_poll.h>
#elif defined(__linux__)
#  include <linux/_poll.h>
#else
#  error
#endif
