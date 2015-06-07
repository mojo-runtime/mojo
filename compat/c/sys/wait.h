#if defined(__FreeBSD__)
#  include <freebsd/c/_wait.h>
#elif defined(__linux__)
#  include <linux/c/_wait.h>
#else
#  error
#endif
