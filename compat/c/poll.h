#if defined(__FreeBSD__)
#  include <freebsd/c/_poll.h>
#elif defined(__linux__)
#  include <linux/c/_poll.h>
#else
#  error
#endif
