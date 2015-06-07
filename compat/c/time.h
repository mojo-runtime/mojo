#if defined(__FreeBSD__)
#  include <freebsd/c/_time.h>
#elif defined(__linux__)
#  include <linux/c/_time.h>
#else
#  error
#endif
