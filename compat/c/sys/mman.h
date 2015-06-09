#if defined(__FreeBSD__)
#  include <freebsd/mman/@all.h>
#elif defined(__linux__)
#  include <linux/mman/@all.h>
#else
#  error
#endif
