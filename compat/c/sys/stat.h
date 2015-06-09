#if defined(__FreeBSD__)
#  include <freebsd/stat/@all.h>
#elif defined(__linux__)
#  include <linux/stat/@all.h>
#else
#  error
#endif
