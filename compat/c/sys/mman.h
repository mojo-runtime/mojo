#if defined(__FreeBSD__)
#  include <freebsd/mman/__all__.h>
#elif defined(__linux__)
#  include <linux/mman/__all__.h>
#else
#  error
#endif
