#if defined(__FreeBSD__)
#  include <freebsd/c/_signal.h>
#elif defined(__linux__)
#  include <linux/c/_signal.h>
#else
#  error
#endif
