#if defined(__FreeBSD__)
#  include <freebsd/utsname/@all.h>
#elif defined(__linux__)
#  include <linux/utsname/@all.h>
#else
#  error
#endif
