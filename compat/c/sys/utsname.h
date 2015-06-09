#if defined(__FreeBSD__)
#  include <freebsd/utsname/__all__.h>
#elif defined(__linux__)
#  include <linux/utsname/__all__.h>
#else
#  error
#endif
