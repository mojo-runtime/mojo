#if defined(__FreeBSD__)
#  include <freebsd/c/_types.h>
#elif defined(__linux__)
#  include <linux/c/_types.h>
#else
#  error
#endif
