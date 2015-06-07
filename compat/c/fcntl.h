#if defined(__FreeBSD__)
#  include <freebsd/c/_fcntl.h>
#elif defined(__linux__)
#  include <linux/c/_fcntl.h>
#else
#  error
#endif
